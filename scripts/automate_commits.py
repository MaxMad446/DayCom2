import os
import subprocess
import sys
import time
from datetime import datetime, timedelta
import random

# Project directory
PROJECT_DIR = "C:/Users/Maxim/Desktop/Project/DayCom2"
SCRIPTS_DIR = os.path.join(PROJECT_DIR, "scripts")

# Number of commits per day
COMMITS_PER_DAY = random.randint(3, 8)

# Time range for commits (8 AM to 8 PM)
START_HOUR = 8
END_HOUR = 20

# Days of week when commits will be made (0=Monday, 6=Sunday)
ACTIVE_DAYS = [0, 1, 2, 3, 4, 5, 6]  # Every day

# Commit messages
COMMIT_MESSAGES = [
    "Update code with new features",
    "Fix bugs and improve performance",
    "Refactor code for better readability",
    "Add new functionality and optimizations",
    "Update dependencies and libraries",
    "Improve code quality and add tests",
    "Enhance user experience and fix issues",
    "Optimize algorithms and data structures",
    "Update documentation and comments",
    "Add new modules and components"
]

def run_command(command, cwd=None):
    """Run a shell command and return the result"""
    if cwd is None:
        cwd = PROJECT_DIR
    
    try:
        result = subprocess.run(
            command,
            shell=True,
            cwd=cwd,
            capture_output=True,
            text=True,
            encoding='utf-8'
        )
        if result.returncode != 0:
            print(f"Error executing command '{command}': {result.stderr}")
            return False
        print(f"Command output: {result.stdout}")
        return True
    except Exception as e:
        print(f"Exception running command '{command}': {e}")
        return False

def generate_random_commit_time():
    """Generate a random commit time within the allowed range"""
    now = datetime.now()
    
    # Random hour between START_HOUR and END_HOUR
    hour = random.randint(START_HOUR, END_HOUR)
    minute = random.randint(0, 59)
    second = random.randint(0, 59)
    
    commit_time = now.replace(hour=hour, minute=minute, second=second, microsecond=0)
    
    # If the time is in the future, go back one day
    if commit_time > now:
        commit_time = commit_time - timedelta(days=1)
    
    return commit_time

def wait_for_next_execution():
    """Wait until the next execution time"""
    now = datetime.now()
    # Next execution in 24 hours plus random minutes
    next_execution = now + timedelta(hours=24, minutes=random.randint(0, 60))
    
    wait_seconds = (next_execution - now).total_seconds()
    print(f"Waiting {wait_seconds/3600:.2f} hours until next execution...")
    time.sleep(wait_seconds)

def main():
    print(f"Starting automated commits for {PROJECT_DIR}")
    
    # Change to project directory
    os.chdir(PROJECT_DIR)
    
    while True:
        try:
            # Check current day
            today = datetime.now().weekday()
            
            if today not in ACTIVE_DAYS:
                print(f"Today is not an active day ({today}). Waiting...")
                wait_for_next_execution()
                continue
            
            print(f"Generating {COMMITS_PER_DAY} commits for today")
            
            # Generate multiple commits
            for i in range(COMMITS_PER_DAY):
                # Generate random code
                generate_script = os.path.join(SCRIPTS_DIR, "generate_code.py")
                if not run_command(f"python \"{generate_script}\"", SCRIPTS_DIR):
                    print("Failed to generate code. Skipping this commit.")
                    continue
                
                # Add all files
                if not run_command("git add ."):
                    print("Failed to add files to git. Skipping this commit.")
                    continue
                
                # Create random commit message
                commit_message = random.choice(COMMIT_MESSAGES)
                
                # Generate random commit time
                commit_time = generate_random_commit_time()
                commit_time_str = commit_time.strftime("%Y-%m-%d %H:%M:%S")
                
                # Make commit with specific date
                commit_cmd = f"git commit --date=\"{commit_time_str}\" -m \"{commit_message}\""
                if not run_command(commit_cmd):
                    print("Failed to make commit. Continuing...")
                    continue
                
                print(f"Commit {i+1}/{COMMITS_PER_DAY} completed at {commit_time_str}")
                
                # Small delay between commits
                time.sleep(random.randint(30, 120))
            
            # Push all commits
            print("Pushing commits to remote repository...")
            if run_command("git push origin main"):
                print("All commits pushed successfully!")
            else:
                print("Failed to push commits.")
            
            # Wait until next day
            wait_for_next_execution()
            
            # Randomize commits per day for next cycle
            global COMMITS_PER_DAY
            COMMITS_PER_DAY = random.randint(3, 8)
            
        except KeyboardInterrupt:
            print("\nAutomation stopped by user.")
            break
        except Exception as e:
            print(f"Error in automation loop: {e}")
            # Wait a bit and continue
            time.sleep(300)
            continue

if __name__ == "__main__":
    main()
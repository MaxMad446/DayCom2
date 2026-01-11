@echo off
:: Script to schedule the automated commits task

echo Creating scheduled task for daily automated commits...

:: Create a scheduled task that runs daily
schtasks /CREATE /TN "DailyCodeCommits" /TR "python \"C:\Users\Maxim\Desktop\Project\DayCom2\scripts\automate_commits.py\"" /SC DAILY /ST 09:00 /F

echo Scheduled task created successfully!
echo The task will run every day at 9:00 AM
echo To run the script immediately, execute: python "C:\Users\Maxim\Desktop\Project\DayCom2\scripts\automate_commits.py"

pause
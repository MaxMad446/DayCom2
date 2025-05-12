@echo off
echo 🚀 Starting Daily Commit Daemon...
echo 📜 Logs will be saved to: daemon.log
echo 💡 Press Ctrl+C in the new window to stop, or close it to run in background.
start /B pythonw.exe "%~dp0scripts\automate_commits.py"
echo ✅ Daemon is running. You can close this window.
pause >nul
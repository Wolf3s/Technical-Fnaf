@echo off
echo Generating entries...
node GenerateEntries > PakEntries.txt
echo Generated entries!
echo Building pak...
UnrealPak "%cd%\FortniteGame-WindowsClientTEST.pak" -Create="%cd%\PakEntries.txt"
echo Built pak!
pause
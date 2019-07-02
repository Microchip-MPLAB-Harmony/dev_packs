@echo OFF

reg Query "HKLM\Hardware\Description\System\CentralProcessor\0" | find /i "x86" > NUL && set OS=32BIT || set OS=64BIT

if %OS%==32BIT SET REGKEY=HKEY_LOCAL_MACHINE\SOFTWARE\Atmel\AtmelStudio\7.0
if %OS%==64BIT SET REGKEY=HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\Atmel\AtmelStudio\7.0

FOR /F "usebackq tokens=2,* skip=2" %%L IN (
    `reg query "%REGKEY%" /v InstallDir`
) DO SET STUDIODIR="%%M"

set DFPDIR="%~dp0"
echo %DFPDIR%
echo %STUDIODIR%
copy %DFPDIR%\studio\SecureSolutionTemplate.zip %STUDIODIR%\ProjectTemplates\CandCPP\1033
copy %DFPDIR%\studio\SecureSolutionTemplateWithBoot.zip %STUDIODIR%\ProjectTemplates\CandCPP\1033
call %STUDIODIR%\atmelstudio.exe /InstallVSTemplates
exit

@ECHO OFF


if NOT "%MCHP_JYTHON%" == ""  GOTO MCHP_SET
 
set here=%~dsp0
SET mplabx_dir=%here%..\
SET MCHP_JYTHON=%mplabx_dir%\mplablibs\modules\ext\mchp-jython-standalone.jar
:MCHP_SET
java -jar "%MCHP_JYTHON%" sign.py %1 %2 %3 %4 %5 %6

rem usage: sign.bat PathToAutoload.py FunctionName ApplicationHexFilePath ProjectDirectory  fnArg1 fnArg2 ..... autoload.py sign_file input_file

@echo off

:: Constants
set CC=g++
set BINDIR=build
set BINARY=%BINDIR%\main.exe
set SOURCE=source/*.c
set TARx86=32
set COMPILER=c++11
set ERRLEVEL=all
set OPTLEVEL=2
set DBGFLAG=g
set LINKERS=-lm -lglut32 -lopengl32 -lglew32s
set LINKDIR=.\linker

:: Creates build dir if doesnt exixst
if not exist %BINDIR% mkdir %BINDIR%

:: Comple source files into binary
%CC% -std=%COMPILER% %SOURCE% -m%TARx86% -W%ERRLEVEL% -O%OPTLEVEL% -%DBGFLAG% -I%LINKDIR% -L%LINKDIR% %LINKERS% -o%BINARY%

:: Run the program when no errors
if "%errorlevel%"=="0" call %BINARY%
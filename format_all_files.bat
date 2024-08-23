@echo off

set ProjectRoot=C:\Users\vitam\OneDrive\GitHub\AuraCourseRPGGame
set SourceCodePath=%ProjectRoot%\Source

FOR /R "%SourceCodePath%" %%f IN (*.cpp, *.h, *.cs) DO (
    clang-format -i "%%f"
    echo %%f
)
PAUSE
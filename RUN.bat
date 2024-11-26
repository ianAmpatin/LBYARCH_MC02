nasm -f win64 CompDist.asm
gcc -m64 CompDist.obj -o CompDist.exe
CompDist.exe
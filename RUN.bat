nasm -f win64 CompDist.asm
gcc -c main.c -o main.obj -std=c11 -m64
gcc main.obj CompDist.obj -o main.exe -m64
main.exe
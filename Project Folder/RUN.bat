nasm -f win64 CompDist.asm
gcc -c test.c -o test.obj -std=c11 -m64
gcc test.obj CompDist.obj -o test.exe -m64
test.exe
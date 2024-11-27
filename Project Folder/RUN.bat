nasm -f win64 CompDist.asm
gcc -c C_ASM.c -o C_ASM.obj -std=c11 -m64
gcc C_ASM.obj CompDist.obj -o C_ASM.exe -m64
C_ASM.exe < test_input.txt
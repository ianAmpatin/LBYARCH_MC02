nasm -f win64 CompDist.asm
gcc -c main.c -o main.obj -std=c11 -m64
gcc -c c_functions.c -o c_functions.obj -std=c11 -m64
gcc -c c_kernel.c -o c_kernel.obj -std=c11 -m64
gcc main.obj c_functions.obj c_kernel.obj CompDist.obj -o test.exe -m64
.\test.exe | Out-File output.txt
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "c_kernel.c"

extern void CompDist(double* x1, double* x2, double* y1, double* y2, double* z, int size);

int main()
{
	int size, runs;
    runs = 30;
    scanf("%d", &size);
    double* x1 = (double*) malloc (size * sizeof(double));
	double* x2 = (double*) malloc (size * sizeof(double));
	double* y1 = (double*) malloc (size * sizeof(double));
	double* y2 = (double*) malloc (size * sizeof(double));
    double* z1 = (double*) malloc (size * sizeof(double));
    double* z2 = (double*) malloc (size * sizeof(double));

    for (int i = 0; i < size; i++)
    {
        scanf("%lf", &x1[i]);
        scanf("%lf", &x2[i]);
        scanf("%lf", &y1[i]);
        scanf("%lf", &y2[i]);
    }

    /* FOR BENCHMARKING 
    clock_t begin, end;
    double time;
    for (int i = 0; i < runs; i++)
    {
        begin = clock();
        call_c_kernel(x1, x2, y1, y2, z1, size);
        end = clock();
        time = (double) (end - begin) / CLOCKS_PER_SEC;
        printf("%.12lf; ", time);

        begin = clock();
        CompDist(x1, x2, y1, y2, z2, size);
        end = clock();
        time = (double) (end - begin) / CLOCKS_PER_SEC;
        CompDist(x1, x2, y1, y2, z2, size);
        printf("%.12lf\n", time);
    }
    */

    call_c_kernel(x1, x2, y1, y2, z1, size);
    CompDist(x1, x2, y1, y2, z2, size);
    printf("\nPrinting Results...\n\n");
    for (int i = 0; i < 10; i++)
    {
        
	    if (z1[i] == z2[i])
        {
            printf("X1[%lf] X2[%lf] Y1[%lf] Y2[%lf]\n", x1[i], x2[i], y1[i], y2[i]);
            printf("C Kernel Output: %lf\n", z1[i]);
            printf("ASM Kernel Output: %lf\n\n", z2[i]);
        }
    }
    printf("\nEnd");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "c_kernel.c"

extern void CompDist(double* x1, double* x2, double* y1, double* y2, double* z, int size);

int main()
{
    printf("Getting Pair Count...\n\n");
	int size, runs;
    runs = 1;
    scanf("%f", &size);
    double* x1 = (double*) malloc (size * sizeof(double));
	double* x2 = (double*) malloc (size * sizeof(double));
	double* y1 = (double*) malloc (size * sizeof(double));
	double* y2 = (double*) malloc (size * sizeof(double));
    double* z1 = (double*) malloc (size * sizeof(double));
    double* z2 = (double*) malloc (size * sizeof(double));

    printf("Scanning...\n\n\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%lf ", &x1[i]);
        scanf("%lf ", &x2[i]);
        scanf("%lf ", &y1[i]);
        scanf("%lf ", &y2[i]);
    }

    printf("Starting...\n\n");

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

    // printf("\nPrinting...\n");
    // for (int i = 0; i < 10; i++)
    // {
	//     printf("[%d]: %.8lf", i, z2[i]);

    //     if (i != (size - 1))
    //     {
    //         printf(", ");
    //     }
    // }
    // printf("\nEnd");
    return 0;
}
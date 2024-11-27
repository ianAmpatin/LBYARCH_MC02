#include <stdio.h>
#include <stdlib.h>
extern void CompDist(double* z, double* x1, double* x2, double* y1, double* y2, int size);

int main()
{
	int size = 2;
    double* x1 = (double*) malloc (size * sizeof(double));
	double* x2 = (double*) malloc (size * sizeof(double));
	double* y1 = (double*) malloc (size * sizeof(double));
	double* y2 = (double*) malloc (size * sizeof(double));
    double* z = (double*) malloc (size * sizeof(double));

    x1[0] = 1.5;
    x2[0] = 3.0;
    y1[0] = 4.0;
    y2[0] = 2.0;
	
	
	x1[1] = 4.0;
    x2[1] = 2.5;
    y1[1] = 3.0;
    y2[1] = 2.5;

    printf("Performing Computations...\n");
    CompDist(z, x1, x2, y1, y2, size);

    printf("\nPrinting...\n");
    for (int i = 0; i < size; i++)
    {
	    printf("[%d]: %.6lf", i, z[i]);

        if (i != (size - 1))
        {
            printf(", ");
        }
    }
    printf("\nEnd");
    return 0;
}
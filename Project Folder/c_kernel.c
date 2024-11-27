#include "c_functions.h"
#include <math.h>

void call_c_kernel(double* x1, double* x2, double* y1, double* y2, double* z, int size){
    for (int i = 0; i < size; i++){

        double temp1, temp2;
        temp1 = x2[i];
        temp2 = y2[i];

        temp1 -= x1[i];
        temp2 -= y1[i];

        temp1 *= temp1;
        temp2 *= temp2;

        temp1 += temp2;

        z[i] = sqrt(temp1);
    }
}
#include <stdio.h>
#include "c_functions.h"


int main(){

    int size;
    double* x1;
    double* x2;
    double* y1;
    double* y2;
    double* z;

    scanf("%d",&size);
    malloc_vectors(x1, x2, y1, y2, z, size);
    input_vectors(x1, x2, y1, y2, z, size);
    
    print_vector(x1, size);
    

    return 0;
}
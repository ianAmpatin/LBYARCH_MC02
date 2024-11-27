#include <stdio.h> 
#include <time.h> 
#include "c_functions.h"
#define MAX_SIZE 100




int main(){

    char* filename = "30.txt";

    int size;
    double x1[MAX_SIZE];
    double x2[MAX_SIZE];
    double y1[MAX_SIZE];
    double y2[MAX_SIZE];
    double z1[MAX_SIZE];
    double z2[MAX_SIZE];


    input_vectors(x1, x2, y1, y2, &size, filename);
    
    call_c_kernel(x1, x2, y1, y2, z1, size);
    call_c_kernel(x1, x2, y1, y2, z2, size);
    print_vector_pair(z1,z2,size);
    
    return 0;
}
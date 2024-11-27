#include <stdio.h> 
#include <time.h> 
#include "c_functions.h"
#define MAX_SIZE 100




int main(){

    char* filename = "3.txt";

    int size;
    double x1[MAX_SIZE];
    double x2[MAX_SIZE];
    double y1[MAX_SIZE];
    double y2[MAX_SIZE];
    double z[MAX_SIZE];


    input_vectors(x1, x2, y1, y2, z, &size, filename);
    

    print_vector(x1, size);
    print_vector(x2, size);
    print_vector(y1, size);
    print_vector(y2, size);
    
    return 0;
}
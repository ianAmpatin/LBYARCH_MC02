#include "c_functions.h"
#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>

/*void malloc_vector(double* vector, int size){
    vector = (double*) malloc (size * sizeof(double));
    vector[0] = 1.0;
    printf("%lf", vector[0]);
}

void malloc_vectors(double* x1, double* x2, double* y1, double* y2, double* z, int size){
    malloc_vector(x1, size);
    malloc_vector(x2, size);
    malloc_vector(y1, size);
    malloc_vector(y2, size);
    malloc_vector(z, size);
}

void input_vector(double* vector, int* size, FILE* file){
    printf("\nReached here\n");
    for (int i = 0; i < *size; i++){
        fscanf(file, "%lf", &vector[i]);
        printf("%lf", vector[i]);
        
    }
    fflush(stdout); 
    printf("%lf", vector[0]);
    printf("\nReached here\n");
}*/

void input_vectors(double* x1, double* x2, double* y1, double* y2, double* z, int* size, const char* filename){

    FILE* file = fopen(filename, "r");
    if (!file)
    {
        printf("Error opening file!\n");
        return;
    }
    else if (file == NULL) {
        printf("No such file");
        return;
    }

    fscanf(file, "%d", size);

    for (int i = 0; i < *size; i++){
        fscanf(file, "%lf", &x1[i]);  
    }
    for (int i = 0; i < *size; i++){
        fscanf(file, "%lf", &x2[i]);  
    }
    for (int i = 0; i < *size; i++){
        fscanf(file, "%lf", &y1[i]);  
    }
    for (int i = 0; i < *size; i++){
        fscanf(file, "%lf", &y2[i]);  
    }
    

    fclose(file);
}


    
void print_vector(double* vector, int size){
    for (int i = 0; i < size; i++){
        printf("%lf\n", vector[i] );
    }
}

void print_time(time_t start_time){
    time_t end_time;
    time(&end_time); 
    printf("Difference is %.2f seconds", difftime(end_time, start_time)); 
}
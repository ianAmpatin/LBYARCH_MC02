#include "c_functions.h"

void malloc_vector(double* vector, int size){
    vector = (double*) malloc (size * sizeof(double));
}

void input_vector(double* vector, int size){
    for (int i = 0; i < size; i++){
        scanf("%lf", (vector + i) );
    }
}
    
void print_vector(double* vector, int size){
    for (int i = 0; i < size; i++){
        printf("%lf\n", vector[i] );
    }
}

int get_start_time();
int get_time_difference(int start_time);
void print_time(int start_time);
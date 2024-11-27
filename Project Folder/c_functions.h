#ifndef c_functions
#define c_functions

#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>

void input_vectors(double* x1, double* x2, double* y1, double* y2, double* z, int* size, const char* filename);
void print_vector(double* vector, int size);

void print_time(time_t start_time);

void call_c_kernel(double* x1, double* x2, double* y1, double* y2, double* z, int size);
extern void CompDist(double* x1, double* x2, double* y1, double* y2, double* z, int size);


#endif 

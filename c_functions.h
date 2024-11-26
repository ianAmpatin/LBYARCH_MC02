#ifndef DFS_H
#define DFS_H

#include <stdio.h> 

void malloc_vector(double* vector, int size);
void input_vector(double* vector, int size);
void print_vector(double* vector, int size);

int get_start_time();
int get_time_difference(int start_time);
void print_time(int start_time);

void call_c_kernel(double* x1, double* x2, double* y1, double* y2, double* z, int size);
void CompDist(double* x1, double* x2, double* y1, double* y2, double* z, int size);



#endif 

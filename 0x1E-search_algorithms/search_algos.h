#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int mod_binary_search(int *array, int value, int begin, int end);
int advanced_binary(int *array, size_t size, int value);
int recursive_binary(int *array, int value, int begin, int end);

#endif

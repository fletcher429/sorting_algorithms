#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);
void swapped(int x, int y);
void bubble_sort(int *array, size_t size);
#endif

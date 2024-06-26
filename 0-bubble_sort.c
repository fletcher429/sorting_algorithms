#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - using the buble sort algorithm to sort the array
 * @array: the array to be sorted
 * @size: size of the array
 * Return: sorted algo
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

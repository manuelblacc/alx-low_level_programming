#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator- executes a func given as a param on each element of an array
 * @array: the array to be printed
 * @size: size of array
 * @action: pointer to the function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

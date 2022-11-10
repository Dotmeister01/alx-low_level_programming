#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of char c
 * @size: size of the array
 * @c: character c
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int q;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	for (q = 0; q < size; q++)
		array[q] = c;

	return (array);
}

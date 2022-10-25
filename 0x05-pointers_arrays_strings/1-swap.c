#include "main.h"

/**
 * swap_int - a function that swaps the values of a and b integers
 * By Dotmeister
 * @a: int first
 * @b: int second
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

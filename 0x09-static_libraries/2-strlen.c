#include "main.h"

/**
 * _strlen - returns length of a string
 * Dotmeister codes
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)

	a++;
	return (a);
}
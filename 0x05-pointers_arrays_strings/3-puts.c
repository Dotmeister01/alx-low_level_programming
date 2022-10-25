#include "main.h"

/**
 * _puts - prints a new string followed by /n - stdout
 * @str: the str
 * Dotmeister codes
 * Description: this should print a new code
 * Return: 0
 */

void _puts(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

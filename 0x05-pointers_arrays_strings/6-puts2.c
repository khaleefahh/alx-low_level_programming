#include "main.h"

/**
 * puts2 - Funcion to print every character of a string
 * @str: The pointer which the function takes as a parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}

	_putchar ('\n');
}
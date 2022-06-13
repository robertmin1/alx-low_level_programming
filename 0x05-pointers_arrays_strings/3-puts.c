#include "main.h"
#include <stdio.h>

/**
 *_puts - to prints the string
 *@str- char array string type
 *Return: void
 *Description : You can only use _putchar
 */


void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

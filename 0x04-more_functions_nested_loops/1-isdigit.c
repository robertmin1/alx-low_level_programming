#include "main.h"

/**
 * _isdigit - checks if parameter 
 * @c: input number.
 * Return: 1 if is a number (0 to 9)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

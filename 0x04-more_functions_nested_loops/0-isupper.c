#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 for success, 0 if otherwise
 */

int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

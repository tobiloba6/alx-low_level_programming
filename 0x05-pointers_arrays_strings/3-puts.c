#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 */

void _puts(char *str)
{
	int n;

	for (n = 0; *(n + str) != '\0');
	{
		putchar(*(n + str));
		n++;
	}
	putchar(10);
}

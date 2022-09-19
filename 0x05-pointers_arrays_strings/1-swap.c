#include "main.h"
#include <stdio.h>

/**
 * swap_int(int *a, int *b) - swaps the value of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

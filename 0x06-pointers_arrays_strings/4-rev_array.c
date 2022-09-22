#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers 
 * @n: no of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

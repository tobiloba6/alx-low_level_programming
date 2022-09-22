#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers 
 * @n: no of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}

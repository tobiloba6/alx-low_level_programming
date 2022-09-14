#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{

	int n, j;
	j = 0;

	while (j < 10)
	{

		for (n = 'a'; n <= 'z'; n++)
		{

			_putchar(n);

		}

		j++;

		_putchar('\n');

	}

}

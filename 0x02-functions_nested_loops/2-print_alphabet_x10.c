#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{

	char c, j;
	j = 0;
	
		while (j < 10)
	{

		for (c = 'a'; c <= 'z'; c++)
		{

			_putchar(c);

		}

		_putchar('\n');

		j++;

	}

}

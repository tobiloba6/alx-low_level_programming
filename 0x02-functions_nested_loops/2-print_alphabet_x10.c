#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{

	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		char c = 0;
		while (c < 10)
		{
			_putchar(c);
		}
		_putchar('\n');
		c++;
	}
}

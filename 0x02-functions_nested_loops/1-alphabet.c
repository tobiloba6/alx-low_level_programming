#include "main.h"

/**
 * main - print the alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

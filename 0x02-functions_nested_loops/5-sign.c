#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: input letter
 *
 * Return: Always Success
 */
int print_sign(int n)
{

	if (n > 0)

	{
		_putchar("+");
		return (1);
	}

	else if (n == 1)
	{

		_putchar("0");
		return (0);
	}

	else
	{

		_putchar(*_*);
		return (-1);
	}
}

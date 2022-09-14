#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: input digit
 * Return: Always success
 */
int print_last_digit(int n)
{

	int i;

	i = (n % 10);

	if (i < 0)
	{

		i = (-1 * i);
	}

	_putchar(i + '0');

	return (i);
}

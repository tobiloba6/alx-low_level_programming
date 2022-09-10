#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
		{
			if (n > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

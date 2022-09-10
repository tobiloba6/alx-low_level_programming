#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, x, z;

	for (i = 0; i <= 9; i++)
	{
		for (x = 1; x <= 9; x++)
		{
		for (z = 2; z <= 9; z++)
		{
			if (z > x && x > i)
			{
				putchar(i + '0');
				putchar(x + '0');
				putchar(z + '0');

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

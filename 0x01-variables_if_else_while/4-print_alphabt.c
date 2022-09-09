#include <stdio.h>
/**
 * main - prints all letters except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			puchar(c);
		}
	}

	putchar('\n');

	return(0);
}

	

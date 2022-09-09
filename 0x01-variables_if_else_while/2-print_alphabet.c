#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Description: prints letters a,b,c...z in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}


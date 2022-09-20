#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int n, len = _strlen(str);

	for (n = ((len - 1) / 2) + 1; n < len; n++)
		putchar(*(str + n));
	putchar(10);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: the length of the given string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

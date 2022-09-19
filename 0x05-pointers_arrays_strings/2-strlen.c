#include "main.h"
#include <stdio.h>

/**
 * int _strlen - returns the lenght of a string
 * @s: string
 * Return: lenght as int
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; ++len);
	return (len);
}

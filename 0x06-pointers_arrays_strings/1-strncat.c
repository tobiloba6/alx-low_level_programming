#include "main.h"

/**
 * _strncat - concatenates two strings and adds inputed no of bytes
 * @dest: string to be appended upon
 * @src: string to append to dest
 * @n: bytes to be compared to
 * Return: returns concatenated dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j] = src[i];

	return (dest);

}


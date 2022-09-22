#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to append to dest
 * @dest: string to be appended to
 *
 * Return: returns to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, j = 0;

	while (dest[j++])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}

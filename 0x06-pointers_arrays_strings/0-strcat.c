#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: string to append to dest
 * @dest: string to be appended to
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	for (j = 0; src[j]; j++,)
	{
		dest[i] = src [j];
	}
	Return (dest);
}

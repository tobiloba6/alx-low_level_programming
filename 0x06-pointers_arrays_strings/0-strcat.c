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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, j++)
	{
		dest[i] = src [j];
	}
	Return (dest);
}

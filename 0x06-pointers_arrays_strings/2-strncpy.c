#include "main.h"

/**
 * _strncpy - copies a string including the terminating null byte
 * if the length of the source string is less than the maximum byte number
 * the remainder of the destination is filled with null bytes
 * @dest: buffer receiving copied string
 * @src: string that's being copied
 * @n: max no of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

#include "main.h"
/**
 * _isalpha - writes a function that checks for lowercase
 * @c: input character to check
 * Return: Always 0
 */
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z')))

		return (1);

	else
		return (0);
}

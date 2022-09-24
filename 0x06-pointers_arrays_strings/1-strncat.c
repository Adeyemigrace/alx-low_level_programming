#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: pointer to the detination array
 * @src: The string to be appended
 * @n: maximum number of characters to be appended.
 * Return: concantenet sstring
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j) != '\0'&& j < n)
	{
		*(dest + i) = rc[j];
		i++;
		j++;
	}

	return (dest);


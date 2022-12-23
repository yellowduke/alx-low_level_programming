#include "main.h"

/**
 * _strncpy - copies n byte of a source into buffer of a destination string,
 * @dest: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied striung
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

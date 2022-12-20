#include "main.h"

/**
 * *_strcpy - copies a string pointed to by @src.
 * @dest: A biffer to copy the string to
 * @src: The source string to copy.
 * Return: A pointer to the destinaton string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

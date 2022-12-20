#include "main.h"

/** 
 * _strlen - Return the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

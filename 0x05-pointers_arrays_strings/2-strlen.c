#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, len;

	for (i=0; s[i] != '\0'; i++)
		len = i;

	return (i);
}

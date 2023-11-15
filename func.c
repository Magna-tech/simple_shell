#include "shell.h"

/**
 * _strlen - prints the length of the string
 * @s: the string to be checked
 *
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len = len + 1;

	return (len);
}

/**
*_strcpy - copies a string to a buffer
*@dest: pointer to a buffer
*@src: pointer to a string
*
*Return: the pointer to dest
*/

char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

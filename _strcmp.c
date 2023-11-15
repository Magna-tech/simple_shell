#include "shell.h"

/**
 * _strcmp - compares two strings
 * @first: first string
 * @sec: second string
 *
 * Return: 0 if the strings are equal
 * a negative number if first is smaller than sec
 * a positive number if first is greater than sec
 */

int _strcmp(char *first, char *sec)
{
	while ((*first && *sec) && (*first == *sec))
	{
		first++;
		sec++;
	}

	return (*first - *sec);
}

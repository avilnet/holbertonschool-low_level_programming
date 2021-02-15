#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string input
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

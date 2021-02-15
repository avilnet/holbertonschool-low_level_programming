#include "holberton.h"
/**
 * _puts - writes the string s and trailing newline to stdout.
 * @str: printed string
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

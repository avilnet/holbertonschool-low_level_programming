#include "holberton.h"
/**
 * puts_half - function that prints half of a string.
 * @str: pointer to a  string
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0, i = 0, s;

	while (*(str + len) != '\0')
	{
		len++;
	}
	s = ((len - 1) / 2) + 1;

	for (i = s; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

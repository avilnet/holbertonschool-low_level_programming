#include "holberton.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string input
 * Return: 0
 */
void print_rev(char *s)
{
	int i, v;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
	}
	i = i - 1;

	for (v = i; v >= 0 ; v--)
	{
		_putchar(*(s + v));
	}
	_putchar('\n');
}

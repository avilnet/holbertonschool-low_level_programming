#include "holberton.h"
/**
 * print_line - dibujar straight lines.
 * @n: int
 * Return: 0
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}

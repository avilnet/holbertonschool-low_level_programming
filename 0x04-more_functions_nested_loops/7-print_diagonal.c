#include "holberton.h"
/**
 * print_diagonal - diagonal line
 * @n: int
 * Return: 0
 */
void print_diagonal(int n)
{
	int c = 0;
	int s;

	if (n <= 0)
		_putchar('\n');
	for (; c <= n - 1; c++)
	{
		for (s = 0; s < c ; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

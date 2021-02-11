#include "holberton.h"
/**
 * print_square - function that prints squares ##
 * @size: int input
 * Return: 0
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a <= size - 1; a++)
	{

		for (b = 0; b <= size - 1; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @x: int
 * Return: int
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar (x + '0');
	return (x);
}

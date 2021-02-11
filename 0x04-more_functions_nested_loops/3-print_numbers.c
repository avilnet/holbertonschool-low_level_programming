#include "holberton.h"
/**
 * print_numbers - print the numbers
 * Return: 0
 */
void print_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}

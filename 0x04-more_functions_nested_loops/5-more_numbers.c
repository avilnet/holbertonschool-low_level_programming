#include "holberton.h"
/**
 * more_numbers - print ten times.
 * Return: 0
 */
void more_numbers(void)
{
	int num1 = 0;
	int num2 = 0;
	int checker;

	for (num1 = 0; num1 <= 9; num1++)
	{
	for (num2 = 0; num2 <= 14; num2++)
	{
		checker = num2 / 10;
		if (checker >= 1)
		{
		_putchar(checker + '0');
		}
		_putchar((num2 % 10) + '0');

	}
	_putchar('\n');
	}
}

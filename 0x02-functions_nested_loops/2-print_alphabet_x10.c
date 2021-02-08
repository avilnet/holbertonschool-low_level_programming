#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet.
 * Return: 0
 **/
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)

	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
}
}

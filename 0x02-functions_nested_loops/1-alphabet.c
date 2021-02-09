#include "holberton.h"
/**
 * main- print alphabet lowercase
 * Description: ASCII 97 - 122
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

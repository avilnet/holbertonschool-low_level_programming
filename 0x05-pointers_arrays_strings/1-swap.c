#include "holberton.h"
/**
 * swap_int - function that swaps the values of tow integers.
 * @a: first int
 * @b: second int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

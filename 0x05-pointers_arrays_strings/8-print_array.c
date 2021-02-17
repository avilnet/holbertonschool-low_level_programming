#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of int
 * @n: number of elements of the array
 * @a: name of array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

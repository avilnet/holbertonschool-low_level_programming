#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - da # hasta 98
 * @n: variable
 * Return: o
 */
void print_to_98(int n)
{
	if (n < 0)
		{
			for (; n < 0; ++n)
			{
				if (n != 98)
				{
					printf("%i, ", n);
				}
			}
		}
		else if (n > 98)
		{
			for (n = n; n >= 98; n--)
			{
				if (n != 98)
				{
					printf("%i, ", n);
				}
			}
		}
		printf("98\n");
}       

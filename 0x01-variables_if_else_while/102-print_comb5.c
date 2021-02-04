#include <stdio.h>
/**
 * main- print combi 2 2 digits.
 * Return: 0
 **/
int main(void)
{
	int i = 0;
	int m = 0;

	for (i = 0; i < 100; i++)
	{
		for (m = i; m < 100; m++)
		{
			if (i != m)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (i == 98 && m == 99)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

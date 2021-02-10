#include "holberton.h"
/**
 * times_table - print times tables
 *Return: 0
 */
void times_table(void)
{
	int t;
	int p;

	for (t = 0; t <= 9; t++)
	{
		for (p = 0; p <= 9 ; p++)
		{
			int result = t * p;

			if (result < 10 && p != 0)

			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			else
			{
				_putchar(result = '0');
			}
		}
		_putchar('\n');
	}
}

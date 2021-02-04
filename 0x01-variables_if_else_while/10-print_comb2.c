#include <stdlib.h>
#include <stdio.h>
/**
 * main- print numbers from 00 to 99.
 * Return: 0
 **/
int main(void)
{
	int i;
	int e;

	for (i = 0; i < 10; i++)
	{
		for (e = 0; e < 10; e++)
		{
			putchar(i + '0');
			putchar(e + '0');
			if (i == 9 && e == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

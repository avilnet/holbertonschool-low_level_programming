#include <stdio.h>
#include <stdlib.h>
/**
 * main- print combinations of single digit numbers.
 * Return: 0
 **/
int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		if (c <= '9')
		{
			putchar(c);

			if (c <= '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

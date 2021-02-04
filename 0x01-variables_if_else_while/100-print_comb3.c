#include <stdio.h>
/**
 * main- print all combi of 2 digits
 * Return: 0
 **/
int main(void)
{
	int i;
	int e;

	for (i = 0; i < 10; i++)
	{
		for (e = i + 1; e < 10; e++)
		{
			putchar(i + '0');
			putchar(e + '0');
			if (i == 8 && e == 9)
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

#include <stdio.h>
/**
 * main- print all combi of 3 digits.
 * Return: 0
 **/
int main(void)
{
	int i;
	int e;
	int f;

	for (i = 0; i < 10; i++)
	{
		for (e = i + 1; f < 10; e++)
		{
			for (f = e + 1; f < 10; f++)
			{
			putchar(i + '0');
			putchar(e + '0');
			putchar(f + '0');
			if (i == 7 && e == 8 && f == 9)
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

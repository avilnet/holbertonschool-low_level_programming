#include <stdio.h>
#include <stdlib.h>
/**
 * main- print 0 to 9
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

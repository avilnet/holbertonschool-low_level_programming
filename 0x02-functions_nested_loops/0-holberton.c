#include <stdlib.h>
#include <stdio.h>
/**
 * main- print Holberton
 * Return: 0
 */
int main(void)
{
	char holberton[9] = "Holberton";
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(holberton[i]);
	}
	putchar('\n');
	return (0);
}

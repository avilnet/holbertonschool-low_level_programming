#include <stdlib.h>
#include <stdio.h>
/**
 * main- print numbers of base 16 in lowercase
 * Return: 0
 **/
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

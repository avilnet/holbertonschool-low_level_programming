#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet except q and e.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ;  ch <= 'z' ; ch++)

	{
		if (ch == 'e' || ch == 'q')
		{

		}

		else
	{
	putchar(ch);
	}
}
putchar('\n');
return (0);
}

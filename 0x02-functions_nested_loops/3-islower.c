#include "holberton.h"
/**
 * int _islower(int c) - check for lowercase character
 * Return: 0
 */
int _islower(int c)
{
	if ((c <= 'z') && (c >= 'a'))
	{
		return (1);
}
	else
	{
		return (0);
	}
}

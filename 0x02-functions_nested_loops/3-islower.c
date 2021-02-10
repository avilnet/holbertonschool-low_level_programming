#include "holberton.h"
/**
 * _islower - check for lowercase character
 * @c: int for validate
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

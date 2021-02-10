#include "holberton.h"
/**
 * int _isalpha(int c) - check for alphabetic character
 * c: is a int
 * main - check the code
 * Return: 0
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}

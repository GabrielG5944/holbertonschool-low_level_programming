#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a
 * letter otherwise 0.
 *
 * @c: ASCII.
 *
 * Return: 1 for letters. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

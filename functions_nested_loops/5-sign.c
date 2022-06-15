#include "main.h"

/**
 * print_sign - Checks if num is greater, iqual or less than zero.
 *
 * @n: input num as int.
 *
 * Return: 1 greater. 0 is zero. -1 less.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

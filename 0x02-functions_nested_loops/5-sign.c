#include "main.h"

/**
 * print_sign - Print the sign of the input
 *
 * @c: sign of var whose sign is to be printed
 *
 * Return: 1 and prints + if n > 0,
 * 0 and prints 0 if n == 0,
 * -1 and prints - if n < 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('+');
	return (1);
}

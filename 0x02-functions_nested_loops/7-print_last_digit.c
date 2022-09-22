#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Print last digit of input
 *
 * @n: said input
 *
 * Return: always int and a single character
 */
int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}

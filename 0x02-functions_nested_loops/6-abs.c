#include <stdlib.h>

/**
 * _abs - same as abs; actually its proxy
 *
 * @n: the number
 *
 * Return: 1 and prints + if n > 0,
 * 0 and prints 0 if n == 0,
 * -1 and prints - if n < 0
 */
int _abs(int n)
{
	return (abs(n));
}

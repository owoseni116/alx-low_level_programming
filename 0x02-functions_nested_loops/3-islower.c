#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: int
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}


#include <stdio.h>

/**
 * main - Main function (Entry point)
 *
 * Documentation: all numbers of base 10,
 * starting from 0 --> (0-9)
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettr = '0';

	for (; lettr <= '9'; lettr++)
	{
		putchar(lettr);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Main function (Entry point)
 *
 * Documentation: print numbers of base 16,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettr = '0';

	for (; lettr <= '9'; lettr++)
	{
		putchar(lettr);
	}
	lettr = 'a';
	for (; lettr <= 'f'; lettr++)
	{
		putchar(lettr);
	}
	putchar('\n');

	return (0);
}

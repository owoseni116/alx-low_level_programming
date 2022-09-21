#include <stdio.h>

/**
 * main - Main function (Entry point)
 *
 * Documentation: print lowercase english alphabets
 * with only `putchar`
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettr = 'a';

	for (; lettr <= 'z'; lettr++)
	{
		putchar(lettr);
	}
	putchar('\n');

	return (0);
}



#include <stdio.h>

/**
 * main - Main function (Entry function)
 *
 * Documentation: print all alphabets with the lower
 * and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettr = 'z';

	for (; lettr >= 'a'; lettr--)
	{
		putchar(lettr);
	}
	putchar('\n');

	return (0);
}


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
	char lettr = 'a';

	for (; lettr <= 'z'; lettr++)
	{
		if (lettr == 'q' || lettr == 'e')
			continue;
		putchar(lettr);
	}
	putchar('\n');

	return (0);
}

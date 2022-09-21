#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - Main function
 *
 * Documentation: This is the first c test file in the experiment
 * directory here, it's meant to be used to discover the location
 * of the <limits.h> header file.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = CHAR_MIN;
	while (c != CHAR_MAX)
	{
		printf("%d\n", c);
		c += 1;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Main function
 *
 * Documentation: print all combinations
 * of two digits. NOTE: '01' and '10' are the
 * same combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for(b = a + 1; b < 10; b++)
		{
			if (a == b)
				continue;

			putchar('0' + a);
			putchar('0' + b);
			
			if (a == 8 && b == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

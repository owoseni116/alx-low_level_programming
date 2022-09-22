#include <stdio.h>

/**
 * main - Main function
 *
 * Documentation: print all combinations of
 * of three digits. NOTE: '01' and '10' are the
 * same combination, and the three digits
 * must be different. '000' and '111' not allowed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (a == b || b == c || a == c)
					continue;

				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);

				if (a == 7 && b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

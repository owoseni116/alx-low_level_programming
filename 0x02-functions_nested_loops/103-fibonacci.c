#include <stdio.h>

/**
 * main - Main function
 *
 * Documentation: Calculate first 100 fibonacci
 * Return: Always 0
 */
int main(void)
{
	long i = 0;
	long j = 1;
	long num = i + j;
	long sum = 0;
	long tmp;

	while (j <= 3524577)
	{
		if (num % 2 == 0)
		{
			sum += num;
		}
		tmp = num;
		num += j;
		i = j;
		j = tmp;
	}
	printf("%ld\n", sum);

	return (0);
}

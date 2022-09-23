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
	long tmp;

	while (j <= 3524577)
	{
		if (num % 2 == 0)
		{
			printf("%ld", num);
			printf(", ");
		}
		tmp = num;
		num += j;
		i = j;
		j = tmp;
	}
	printf("3524578\n");

	return (0);
}

#include <stdio.h>

/**
 * main - Main function
 * 
 * Documentation: Calculate first 100 fibonacci
 * Return: Always 0
 */
int main(void)
{
	long i = 1;
	long j = 2;
	int n;

	for (n = 0; n < 25; n++)
	{
		if (n == 24)
		{
			printf("%ld, %ld\n", i, j);
			break;
		}
		printf("%ld, %ld, ", i, j);
		i += j;
		j += i;	
	}

	return (0);
}

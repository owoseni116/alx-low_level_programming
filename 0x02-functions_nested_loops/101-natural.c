#include <stdio.h>


/**
 * main - Main function
 *
 * Return: Always 0
 */
int main(void)
{
	int sum;
	int num = sum = 0;

	for (; num < 1024; num++)
	{
		if (!(num % 3 && num % 5))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}

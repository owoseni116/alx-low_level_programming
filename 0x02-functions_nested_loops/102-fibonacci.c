#include <stdio.h>

int fibonacci(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
/**
 * main - Main function
 * 
 * Documentation: Calculate first 100 fibonacci
 * Return: Always 0
 */
int main(void)
{
	int i = 1;
	for (; i <= 49; i++)
	{
		printf("%d\n", fibonacci(i));	
	}
	i = fibonacci(50);
	printf("%d", i);

	return (0);
}

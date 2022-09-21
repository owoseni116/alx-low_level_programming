#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Documentation: 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;

	if ((rem) > 5)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		printf("%d", rem);
		puts(" and is greater than 5");	
	}
	else if ((rem) == 0)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		printf("%d", rem);
		puts(" and is 0");
	} else if ((rem) < 6)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		printf("%d", rem);
		puts(" and is less than 6  and not 0");	
	}
	return (0);
}

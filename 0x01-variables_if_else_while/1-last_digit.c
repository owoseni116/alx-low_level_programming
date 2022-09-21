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
	int n;
	char string[13];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	string = "Last digit of";
	
	if ((n % 10) < 5)
		printf("%c %d and is greater than 5\n", string, n);
	if ((n % 10) == 0)
		printf("%c %d and is 0\n", string, n);
	if ((n % 10) < 6)
		printf("%c %d and is less than 6 and not 0\n", string, n);

	return (0);
}

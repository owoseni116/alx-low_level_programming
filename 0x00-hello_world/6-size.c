#include <stdio.h>
#include <stdint.h>

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_type;
	int int_type;
	long long_type;
	int64_t longlong_type;
	float float_type;

	printf("Size of a char: %ld byte(s)\n", sizeof(char_type));
	printf("Size of an int: %ld byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_type));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlong_type));
	printf("Size of an float: %ld byte(s)\n", sizeof(float_type));

	return (0);
}

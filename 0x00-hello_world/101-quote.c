#include <unistd.h>

/**
 * main - Main function
 *
 * Documentation: Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19\"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, word, 59);


	return (1);
}

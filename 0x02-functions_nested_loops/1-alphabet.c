#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * in lowercase followed by a new line
 *
 * Documentation: print alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ltr = 'a';

	for (; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
}

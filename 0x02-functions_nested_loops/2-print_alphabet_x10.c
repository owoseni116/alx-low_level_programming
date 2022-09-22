#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char ltr;
	int i;

	for (i = 0; i < 10; i++)
	{	

	ltr = 'a';
	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr++;
	}
	_putchar('\n');
	}
}

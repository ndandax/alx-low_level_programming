#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *
 *Description: program that prints lower case letters
 *
 *Return: 0
 */
void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}

	_putchar('\n');
}

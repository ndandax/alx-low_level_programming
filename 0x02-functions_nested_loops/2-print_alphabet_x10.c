#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *Description: as it it
 *
 *Return: 0
 */
void print_print_alphabet_x10(void)
{
	int x;
	int y = 0;

	while (y <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');

		y++;
	}
}

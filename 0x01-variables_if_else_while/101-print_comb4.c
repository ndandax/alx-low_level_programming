#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9 ; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);

				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

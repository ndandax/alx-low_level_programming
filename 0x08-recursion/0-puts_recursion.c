#include "main.h"
/**
 *_puts_recursion - Function
 *@s: string
 *Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0'
	    return;
	_putchar(*s);
	_puts_recursion(s + 1);
}

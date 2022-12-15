#include "main.h"

/**
 *_isdigit - Entry point
 *Description: checks uppercase
 *@c: parameter
 *
 *Return: 1 is upper , 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

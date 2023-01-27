#include "lists.h"
#include <stdio.h>
/**
 *print_list - Function name
 *@h - parameter
 *Return: 0
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return;
	printf("%s\n %d\n",h->str,h->len);
	h = h->next;
	return (0);
}

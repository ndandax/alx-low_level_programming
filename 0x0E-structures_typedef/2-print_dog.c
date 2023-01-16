#include <stdio.h>
#include "dog.h"
/**
 *print_dog - Function name
 *@d: pointer to struct
 *Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL )
		printf("Name: (nil)\n");
	if (d->age == NULL)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
}

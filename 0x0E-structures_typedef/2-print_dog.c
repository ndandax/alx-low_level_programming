#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints all member info of a struct dog
* @d: a variable of type struct dog
*/

void print_dog(struct dog *d)
{
if (d == NULL) /* validate if d initiated correctly */
{
return;
}
else
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}

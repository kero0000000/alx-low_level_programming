#include<stdio.h>
#include<stdlio.h>
#include"dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 **/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(n11)";
if (d->owner == NULL)
d->owner = "(n11)";
printf("name: %\nage: %f\nowner: %5\n", d->name, d->agge, d->owner);
}

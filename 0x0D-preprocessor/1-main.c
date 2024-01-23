#ifndef PI_H
#define PI_H
#define PI 3.14159265358979323846
#endif /* PI_H */
#include "1-pi.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
float a;
float r;
r = 98;
a = PI * r * r;
printf("%.3f\n", a);
return (0);
}

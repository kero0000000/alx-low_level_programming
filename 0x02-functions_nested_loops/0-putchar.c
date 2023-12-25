#include <stdio.h>
/**
 * putchar - writes the character c to stdout
 * @c:the character to print
 * Return: on success 1.
 * on error,-1 is Returned, and errno is set appropriately
 **/
int _put char (char c)
{
return (write(1, &c, 1));
}

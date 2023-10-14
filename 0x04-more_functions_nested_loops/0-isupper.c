#include"main.h"
/**
*_isupper - checks for uppercase characters
*@c: the function parameter
*Return:1 if it's uppercase
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}


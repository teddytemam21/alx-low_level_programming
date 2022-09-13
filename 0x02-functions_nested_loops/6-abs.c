#include "main.h"
#include <stdio.h>
/**
 * * _abs -> prints absolute value of a number
 * * @n: parameter
 * * Return: absolute value of a number
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}

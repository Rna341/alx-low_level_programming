#include "main.h"

/**
* _print_sign - function that prints the sign of a number.
*
* @n: checks input of function
*
* Return: returns 1 if 'n' is positive, 0 if zero,
* and -1 if negative
*/

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	putchar('\n');
}

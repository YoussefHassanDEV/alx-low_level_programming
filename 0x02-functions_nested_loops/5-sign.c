#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: the number to be checked
 *
 * Return:	1 and prints + if n is greater than zero
 *		0 and prints 0 if n is zero
 *		-1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
		return (_putchar('+'), (1));
	else if (n == 0)
		return (_putchar('0'), (0));
	else
		return (_putchar('-'), (-1));
}

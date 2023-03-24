#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *			followed by a new line
 *
 * @n: the number begin with
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;
	int inc = 1;

	if (n > 98)
		inc = -1;

	for (i = n; i != 98; i += inc)
		printf("%d, ", i);

	puts("98");
}

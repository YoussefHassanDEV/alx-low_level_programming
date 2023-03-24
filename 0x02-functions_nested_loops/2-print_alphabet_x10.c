#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Returns - void
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;
	int iter_times = 10;

	for (i = 0; i < iter_times; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

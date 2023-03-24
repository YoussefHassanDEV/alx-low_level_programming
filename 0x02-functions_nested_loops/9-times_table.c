#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;

			if (j)
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
			}

			if (res > 9)
				_putchar('0' + res / 10);
			_putchar('0' + res % 10);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * puts2 - Write a nother function
 * @str: an input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}

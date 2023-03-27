#include "main.h"

/**
 * puts_half -  Write a nother function
 * @str: an input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	i = len / 2;

	while (i != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

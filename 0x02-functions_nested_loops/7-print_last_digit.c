#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: the number to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < 0)
		digit = -digit;

	_putchar('0' + digit);
	return (digit);
}

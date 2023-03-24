#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @num: the number to be checked
 *
 * Return: the absolute value of num
 */

int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: The character to be checked
 *
 * Return:	1 if c is lowercase
 *		0 otherwise
 */

int _islower(int c)
{
	return ('a' <= c && c <= 'z');
}

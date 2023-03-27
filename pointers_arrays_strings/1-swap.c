/**
 * swap_int -  a function
 * @a: an integer pointer
 * @b: an integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * _strlen -  a function
 * @s: an integer pointer
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
	i++;
	len++;
	}
	return (len);
}

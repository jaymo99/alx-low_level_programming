/**
 * _atoi - converts the initial portion of the string to int
 * @s: pointer to string
 *
 * Return: integer result
 */
int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}


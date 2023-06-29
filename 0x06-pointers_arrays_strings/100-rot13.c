/**
 * rot13 - function that encodes a string using rot13
 *
 * @str: string input
 *
 * Return: @start
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *start = str;
	int offset;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
			offset = 13;
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
			offset = -13;
		else
			offset = 0;

		if (offset != 0)
			*ptr = *ptr + offset;

		ptr++;
	}

	return (start);
}


#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_kilom - checks if character is a kilometer
 * @a: the char to check
 * @kilom: the kilometer string
 * Return: 1 if true, 0 if false
 */
int is_kilom(char a, char *kilom)

{

	while (*kilom)
		if (*kilom++ == a)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @s: The character to input
 * Return: 1 if s is alphabetic, 0 otherwise
 */

int _isalpha(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts a string to an integer
 * @b: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *b)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; b[i] != '\0' && flag != 2; i++)
	{
		if (b[i] == '-')
			sign *= -1;

		if (b[i] >= '0' && b[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (b[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

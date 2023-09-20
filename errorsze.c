#include "shell.h"
/**
 * _eputs - print input string
 * @str: the string
 * Return: Nothing
 */
void _eputs(char *str)
{
	int ade = 0;

	if (!str)
<<<<<<< HEAD
	Return();
=======
		return;
>>>>>>> bb78b1d7984e11c1b8a73611cdc33f1644ca2d6e
/*
 * the main part
*/
	while (str[ade] != '\0')
	{
		_eputchar(str[ade]);
		ade++;
	}
}

/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _eputchar(char c)
{
	static int be;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || be >= WRITE_BUF_SIZE)
	{
		write(2, buf, be);
		be = 0;
	}
/*
 * lmost done
 */
	if (c != BUF_FLUSH)
		buf[be++] = c;
	return (1);
}

/**
 * _putfd - writes the character c to given fd
 * @c: The character to print
 * @fd: The filedescriptor to write to
 * Return: On success 1 or -1
 */
int _putfd(char c, int fd)
{
	static int ka;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || ka >= WRITE_BUF_SIZE)
	{
		write(fd, buf, ka);
		ka = 0;
	}
	if (c != BUF_FLUSH)
		buf[ka++] = c;
	return (1);
}

/**
 * _putsfd - prints string
 * @str: the string
 * @fd: the filedescriptor to write to
 * Return: the number of chars put
 */
int _putsfd(char *str, int fd)
{
	int leg = 0;

	if (!str)
		return (0);
	while (*str)
	{
		leg += _putfd(*str++, fd);
	}
	return (leg);
}

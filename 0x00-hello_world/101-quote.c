#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "and that piece of art is useful" - Dora Korpar,
 *              2015-10-19, followed by a new line, to the standard error.
 * Return: Always 1 (Error code)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59; /* length of the string */
	/* write the string to standard error using write() */
	write(2, str, len);
	return (1);
}

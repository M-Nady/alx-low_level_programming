#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 98; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');
            putchar(i != 98 || j != 99 ? ',' : '\n');
            putchar(i != 98 || j != 99 ? ' ' : '\0');
        }
    }

    return (0);
}

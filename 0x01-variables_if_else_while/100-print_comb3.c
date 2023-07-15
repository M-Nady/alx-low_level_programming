#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, last;

    last = 99;
    for (i = 0; i < last; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');

            putchar(j / 10 - ((j / 10) / 10) * 10 + '0');
            putchar(j % 10 + '0');

            if (i != last - 1 || j != last)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}

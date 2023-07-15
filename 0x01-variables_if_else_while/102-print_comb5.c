#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k, l;

    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            k = i / 10 * 100 + i % 10;
            l = j / 10 * 100 + j % 10;

            if (k < l)
            {
                putchar((i / 10) + '0');
                putchar((i % 10) + '0');
                putchar(' ');
                putchar((j / 10) + '0');
                putchar((j % 10) + '0');

                if (i != 98 || j != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}

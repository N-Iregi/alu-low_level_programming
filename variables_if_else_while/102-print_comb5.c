#include <stdio.h>

/**
 * main - prints all combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar('0' + i / 10);      /* putchar 1 - tens digit of i */
			putchar('0' + i % 10);      /* putchar 2 - units digit of i */
			putchar(' ');               /* putchar 3 - space between numbers */
			putchar('0' + j / 10);      /* putchar 4 - tens digit of j */
			putchar('0' + j % 10);      /* putchar 5 - units digit of j */
			if (i != 98 || j != 99)
			{
				putchar(',');           /* putchar 6 - comma */
				putchar(' ');           /* putchar 7 - space after comma */
			}
			j++;
		}
		i++;
	}
	putchar('\n');                      /* putchar 8 - newline */

	return (0);
}

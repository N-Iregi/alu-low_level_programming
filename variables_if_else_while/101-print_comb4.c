#include <stdio.h>

/**
 * main - prints all combinations of three different digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar('0' + i);           /* putchar 1 - first digit */
				putchar('0' + j);           /* putchar 2 - second digit */
				putchar('0' + k);           /* putchar 3 - third digit */
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');           /* putchar 4 - comma */
					putchar(' ');           /* putchar 5 - space */
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');                          /* putchar 6 - newline */

	return (0);
}

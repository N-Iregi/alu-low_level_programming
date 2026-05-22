#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar('0' + ch);
		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}

	putchar('\n');

	return (0);
}

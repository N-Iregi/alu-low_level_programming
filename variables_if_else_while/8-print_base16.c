#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by new line.
 *
 * Return: 0
 */
int main(void)
{
	int ch1;
	int ch2;

	for (ch1 = 48; ch1 < 58; ch1++)
		putchar(ch1);
	for (ch2 = 97; ch2 < 103; ch2++)
		putchar(ch2);
	putchar('\n');

	return (0);
}

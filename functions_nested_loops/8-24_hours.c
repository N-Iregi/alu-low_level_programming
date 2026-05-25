#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar('0' + h / 10);   /* tens digit of hour */
			_putchar('0' + h % 10);   /* units digit of hour */
			_putchar(':');
			_putchar('0' + m / 10);   /* tens digit of minute */
			_putchar('0' + m % 10);   /* units digit of minute */
			_putchar('\n');
			m++;
		}
		h++;
	}
}

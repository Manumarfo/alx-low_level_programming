#include "main.h"
/**
 * jack_bauer - function prints every minute of the day of Jack Bauer
 * hr = hour, min = minutes
 * / 10 allows second digit to count
 * Return:every minute on 24 hour clock
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * times_table - displays the 9 times table from 0
 * Return: times table
 */
void times_table(void)
{
	int col, row, res;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 0; col <= 9; col++)
		{
			res = row * col;
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

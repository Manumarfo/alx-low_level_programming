#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int row, space, symbol;

		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= (size - 1); space++)
			{
				_putchar(' ');
			}

			for (symbol = 1; symbol <= ((2 * row) - 1); symbol++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

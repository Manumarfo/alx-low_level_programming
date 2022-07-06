#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number entered
 * Return: always 0.
 */
int print_last_digit(int num)
{
	int pld;

	pld = (num % 10);
	if (pld < 0)
	{
		pld = (pld * -1);
	}
	_putchar(pld + '0');
	return (pld);
}

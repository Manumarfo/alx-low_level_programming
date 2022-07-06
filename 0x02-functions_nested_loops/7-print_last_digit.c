#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @pld: variable to hold last digit
 * @num: number entered
 * Return: always 0.
 */
int print_last_digit(int num)
{
	int pld;

	pld = (num % 10);
	return (pld);
}

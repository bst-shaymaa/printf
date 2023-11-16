#include "main.h"
#include <stdio.h>

/**
 * _convert_to_b - convert integer
 * @nb: the integer to convert
 * Description: convert an integer to binary
 */

void _convert_to_b(unsigned int nb)
{
	if (nb / 2 != 0)
		_convert_to_b(nb / 2);
	_putchar((nb % 2) + '0');
}

/**
 * print_b - print
 * @val: variable list arg
 * @p_i_count: pointer to index
 * Description:print the binary of a number
 * Return: Always 0
 */

int print_b(va_list val, unsigned int *p_i_count)
{
	int tempNum;

	tempNum = va_arg(val, unsigned int);
	_convert_to_b(tempNum);
	*p_i_count = *p_i_count + 1;
	return (0);
}

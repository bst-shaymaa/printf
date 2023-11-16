#include "main.h"
#include <stdio.h>

/**
 * print_b - print binary
 * @nb: the integer to convert
 * Description: convert an integer to binary
 *Return: Always 0
 */

int print_b(unsigned int nb)
{
	if ((nb / 2) != 0)
		print_b(nb / 2);
	_putchar((nb % 2) + '0');
		return (0);
}

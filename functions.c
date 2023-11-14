#include "main.h"

/**
 * count_int - counts num len of int
 * @n: the integer to print
 *
 *
 * Return: integer
 */
int count_int(int n)
{
	int count = 0;

	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

/**
 * id_print - prints percent i and percent d
 * @n: the integer to print
 *
 *
 * Return: integer
 */
void id_print(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m / 10)
	{
		id_print(m / 10);
	}
	_putchar(m % 10 + '0');
}

/**
 * sr_print - prints strings in reverse
 * @str: string
 *
 * Return: integer
 */
int sr_print(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = (count - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (count);
}

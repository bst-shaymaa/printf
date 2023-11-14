#include "main.h"
/**
 * print_s - print a string.
 * @str: string
 * Return: the length of the string.
 */

int print_s(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}


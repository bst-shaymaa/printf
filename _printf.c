#include "main.h"
#include <stdio.h>
/**
 * _printf - prints anything
 * @format: the string to print
 * Return: an integer
 */
int _printf(char *format, ...)
{
	unsigned int i = 0, count = 0;
	unsigned int *p_i = &i;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
	{
		va_end(arg);
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case '\0':
				va_end(arg);
				return (-1);
			case '%':
				count += print_p();
				i++;
				break;
			case 'c':
				count += print_c(va_arg(arg, int));
				i++;
				break;
			default:
				count += _printf_list(arg, format[i + 1], p_i);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return ((int) count);
}
/**
 * _printf_list - prints
 * @val: the variable list
 * @ch: character of the format idx
 * @p_i: pointer to i
 * Return: an integer
 */
int _printf_list(va_list val, char ch, unsigned int *p_i)
{
	unsigned int *p_i_count = p_i;
	int count = 0;

	switch (ch)
	{
		case 'z':
			count += print_c('%');
			*p_i_count = *p_i_count + 1;
			break;
		case 's':
			if (va_arg(val, char *) == NULL)
				count += print_s("(null)");
			else
				count += print_s(va_arg(val, char *));
			*p_i_count = *p_i_count + 1;
			break;
		case 'r':
			if (va_arg(val, char *) == NULL)
				count += print_s("(null)");
			else
				count += sr_print(va_arg(val, char *));
			*p_i_count = *p_i_count + 1;
			break;
		case 'd':
		case 'i':
			id_print(va_arg(val, int));
			count += count_int(va_arg(val, int));
			*p_i_count = *p_i_count + 1;
			break;
		case 'b':
			count += print_b(va_arg(val, unsigned int));
			*p_i_count = *p_i_count + 1;
			break;
		default:
			count += print_c('%');
			count += print_c(ch);
			*p_i_count = *p_i_count + 1;
	}
	return (count);
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @ap: list of arguments pointing to the character to be printed
 */
void print_char(va_list ap)
{
	char character;

	character = va_arg(ap, int);
	printf("%c", character);
}
/**
 * print_int - prints an integer
 * @ap: list of arguments pointing to the integer to be printed
 */
void print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	printf("%d", num);
}
/**
 * print_float - prints a float
 * @ap: list of arguments pointing to the float to be printed
 */
void print_float(va_list ap)
{
	float num;

	num = va_arg(ap, double);
	printf("%f", num);
}
/**
 * print_string - prints a string
 * @ap: list of arguments pointing to the string to be printed
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j = 0;
	char *separator = "";

	datatype choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(ap, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(ap);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");

	va_end(ap);
}

#include "variadic_functions.h"

/**
 * print_all - function will print all specefier
 * @format: operations
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list op;

	va_start(op, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(op, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(op, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(op, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(op);
}

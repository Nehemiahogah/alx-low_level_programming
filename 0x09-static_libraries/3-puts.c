#include "main.h"
<<<<<<< HEAD
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
=======

/**
 * _puts - function that print a new line
 * @str: a string
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
 */

void _puts(char *str)
{
<<<<<<< HEAD
while (*str)
_putchar(*str++);

_putchar('\n');
=======
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
}

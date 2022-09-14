#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Description: void print_alphabet(void)
 * Return: 0
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
_putchar('\n');
}

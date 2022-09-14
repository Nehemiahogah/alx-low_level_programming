#include "main.h"
/**
 * _isalpha - Print for letters
 * @c: is the int that will use for argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

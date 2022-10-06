#include "main.h"
<<<<<<< HEAD
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
=======

/**
 * _isupper - checks for uppercase letter
 * @c: character to check for
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
}

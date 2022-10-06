#include "main.h"
<<<<<<< HEAD
/**
*_isdigit - function that verifies if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
=======

/**
 * _isdigit - check characters that are digit
 * @c: character to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
}

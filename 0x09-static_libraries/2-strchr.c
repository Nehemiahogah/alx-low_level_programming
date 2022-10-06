#include "main.h"
<<<<<<< HEAD
#include <stddef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
=======

/**
 * _strchr - function of a chararcter in a string
 * @s: returning a pointer to string
 * @c: character to return
 *
 * Return:pointer to spot in s with c or null
 */
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
char *_strchr(char *s, char c)
{
	int i;

<<<<<<< HEAD
	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
=======
	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)

			return (s + i);
	}
	if (*(s + i) == c)

		return (s + i);
	return (0);
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
}

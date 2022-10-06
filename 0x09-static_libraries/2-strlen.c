#include "main.h"
<<<<<<< HEAD
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
=======

/**
 * _strlen - the string length
 * @s: string length to print
 *
 * Return: return length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
>>>>>>> 30d0c7c3823e0adc289e89a490db15715957ad98
}

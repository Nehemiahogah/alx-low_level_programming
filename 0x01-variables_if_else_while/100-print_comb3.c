#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print single digit number starting from zero
* Return: returns zero at the end
*/
int main(void)
{
int i,j;
for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)
{
if (j > 1)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

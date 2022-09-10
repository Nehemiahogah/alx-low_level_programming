#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
int n1 = 0, n2;
while (n1 <= 98)
{
n2 = n1 + 1;
while (n2 <= 99)
{
if (n2 != n1)
{
putchar((n1 / 10) + 48);
putchar((n1 % 10) + 48);
putchar(' ');
putchar((n2 / 10) + 48);
putchar((n2 % 10) + 48);
if (n1 == 98 || n2 == 98)
{
putchar(',');
putchar(' ');
}
}
++n2;
}
++n1;
}
putchar('\n');
return (0);
}

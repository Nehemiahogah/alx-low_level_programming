#include <stdio.h>
/**
* main - print possible combination of two 2-digit
* numbers 
* Return: returns zero at the end
*/
int main(void) 
/* * prints combination of two two digit numbers 
*/ 
{ 
int a, b; 
for (a = 0; a <= 98; a++) 
{ 
for (b = a + 1; b <= 99; b++) 
{ 
putchar((a / 10) + '0'); 
putchar((a % 10) + '0'); 
putchar(' '); 
putchar((b / 10) + '0'); 
putchar((b % 10) + '0'); 
if (a == 98 && b == 99) 
continue; 
putchar(','); 
putchar(' '); 
} 
} 
{ 
putchar('\n'); 
} 
return (0);
}


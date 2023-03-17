#include <stdio.h>
/**
 * main -  Prints the numbers from 0 to 9 using ascii code
 * Return: 0 (Done)
 */
int main(void)
{
int n = 48; /* ascii code of number 0*/
for (; n < 58 ; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main -  Prints the numbers of base 16
 * Return: 0 (Done)
 */
int main(void)
{
int n = 48;
char a = 'a';
char f = 'f';
for (; n <= 57 ; n++)
{
	putchar(n);
	if (n == 57)
	{
		for (; a <= f ; a++)
		{
			putchar(a);
		}
	}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase without e and q
 * Return: 0 (Done)
 */
int main(void)
{
char a = 'a';
char z = 'z';
for (; a <= z ; a++)
{
	if (a != 'e' && a != 'q')
	{
		putchar(a);
	}
}
putchar('\n');
return (0);
}

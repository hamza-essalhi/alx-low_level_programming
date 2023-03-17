#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase
 * Return: 0 (Done)
 */
int main(void)
{
char a = 'a';
char up_a = 'A';
char z = 'z';
char up_z = 'Z';
for (; a <= z ; a++)
{
	putchar(a);
	if (a == z)
	{
		for (; up_a <= up_z ; up_a++)
		{
			putchar(up_a);
		}
	}
}
putchar('\n');
return (0);
}

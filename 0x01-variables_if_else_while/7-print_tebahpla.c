#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase in reverse
 * Return: 0 (Done)
 */
int main(void)
{
char a = 'a';
char z = 'z';
for (; a <= z ; z--)
{
putchar(a);
}
putchar('\n');
return (0);
}

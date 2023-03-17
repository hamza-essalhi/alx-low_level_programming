#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase in reverse
 * Return: 0 (Done)
 */
int main(void)
{
char a = 'a';
char z = 'z';
for (; z <= a ; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}

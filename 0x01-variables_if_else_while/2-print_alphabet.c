#include <stdio.h>
/**
 * main -  Prints the alphabet in lowercase
 * Return: 0 (Done)
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
for (int a = 0; a < 26 ; a++)
{
putchar(alphabet[a]);
}
return (0);
}

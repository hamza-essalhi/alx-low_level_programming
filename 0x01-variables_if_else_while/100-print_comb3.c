#include <stdio.h>
/**
 * main -  Prints the i and j if j>i using ascii code
 * Return: 0 (Done)
 */
int main(void)
{
int i, j;
for (i = 48 ; i <= 56 ; i++)
{
	for (j = 49 ; j <= 56 ; j++)
	{
		if (j > i)
		{

			putchar(i);
			putchar(j);
			if (i < 56 || j < 57)
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

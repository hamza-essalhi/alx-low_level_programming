#include <stdio.h>
/**
 * main -  Prints the i,j from 0 to 99 using ascii code
 * Return: 0 (Done)
 */
int main(void)
{
int i;
int j;
for (i = 0 ; i < 100 ; i++)
{
	for (j = 0 ; j < 100 ; j++)
	{
		if (i < j)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}

printf("\n");
return (0);
}

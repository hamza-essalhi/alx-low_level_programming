#include <stdio.h>
/**
 * main -  Prints the i and j if j>i k>j using ascii code
 * Return: 0 (Done)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 48 ; i <= 56 ; i++)
{
	for (j = 49 ; j <= 57 ; j++)
	{
		for (k = 50 ; k <= 57 ; k++)
		{
			if (k > j && j > i)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55 || j < 56 || k < 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

putchar('\n');
return (0);
}

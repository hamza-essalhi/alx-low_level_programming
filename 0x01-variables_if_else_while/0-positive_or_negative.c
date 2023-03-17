#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Check if n is positive or negative.
 * Return: 0 (Done)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is negative", n);
}
return (0);
}

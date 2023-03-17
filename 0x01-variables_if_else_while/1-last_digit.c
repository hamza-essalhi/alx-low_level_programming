#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Get the Last digit of n
 * Return: 0 (Done)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;

if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}

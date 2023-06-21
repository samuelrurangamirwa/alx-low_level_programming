#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
int limit = 1024;
int sum = 0;

for (int i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("The sum of multiples of 3 or 5 below %d is: %d\n", limit, sum);

return (0);
}

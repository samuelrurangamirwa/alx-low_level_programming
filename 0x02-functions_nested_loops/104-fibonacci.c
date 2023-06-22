#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 98, i;
uint64_t a = 1, b = 2;

printf("%lu", a);

for (i = 3; i <= limit; i++)
{
uint64_t temp = a;
a = b;
b = temp + b;

if (a < b)
{
printf(", %lu", a);
}
else
{
break;
}
}

printf("\n");

return (0);
}

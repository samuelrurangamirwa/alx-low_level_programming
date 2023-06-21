#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 98, i;
int fib1 = 1, fib2 = 2;

printf("%d, %d", fib1, fib2);

for (i = 3; i <= limit; i++)
{
int fib_next = fib1 + fib2;
printf(", %d", fib_next);

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}

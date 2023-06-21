#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 98, i;
unsigned int fib1 = 1, fib2 = 2, fib_next;

printf("%u, %u", fib1, fib2);

for (i = 3; i <= limit; i++)
{
fib_next = fib1 + fib2;
printf(", %u", fib_next);

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}

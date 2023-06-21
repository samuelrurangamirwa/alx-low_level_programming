#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 50;
long long fib1 = 1, fib2 = 2, fib_next;

printf("%lld , %lld", fib1, fib2);

for (int i = 3; i <= limit; i++)
{
fib_next = fib1 + fib2;
printf(" , %lld", fib_next);

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}

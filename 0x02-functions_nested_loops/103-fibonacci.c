#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 4000000;
int fib1 = 1, fib2 = 2, fib_next;
int sum = 0;

while (fib1 <= limit)
{
if (fib1 % 2 == 0)
{
sum += fib1;
}

fib_next = fib1 + fib2;
fib1 = fib2;
fib2 = fib_next;
}

printf("%d\n", sum);

return (0);
}

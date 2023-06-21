#include "main.h"

/**
 * print_number - Prints a number with proper formatting
 * @num: The number to be printed
 */
void print_number(int num)
{
if (num < 10)
{
_putchar(' ');
}
else
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number defining the size of the table
 */
void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
}

print_number(result);
}
_putchar('\n');
}
}


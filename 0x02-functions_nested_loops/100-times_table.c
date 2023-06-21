#include "main.h"

/**
 * print_number - Prints a number with appropriate formatting.
 * @result: The number to be printed.
 */

void print_number(int result)
{
if (result >= 100)
{
_putchar(result / 100 + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result >= 10)
{
_putchar(result / 10 + '0');
}

_putchar(result % 10 + '0');
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of rows and columns in the times table.
 */
void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
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
}
_putchar(' ');

if (result < 10)
{
_putchar(' ');
}
if (result < 100)
{
_putchar(' ');
}
print_number(result);
}
_putchar('\n');
}
}

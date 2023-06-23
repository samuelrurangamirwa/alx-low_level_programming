#include "main.h"

/**
* print_number - Prints an integer
* @n: The integer to be printed
*/
void print_number(int n)
{
int scale = 1;
int temp = n;
if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
_putchar('-');
n = -n;
}

while (temp > 0)
{
scale *= 10;
temp /= 10;
}

while (scale > 1)
{
scale /= 10;
_putchar((n / scale) % 10 + '0');
}
}


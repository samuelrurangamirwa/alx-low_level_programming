#include "main.h"

/**
* print_triangle - Prints a triangle using #
* @size: The size of the triangle
*/
void print_triangle(int size)
{
int i, j, space;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (space = size - i - 1; space > 0; space--)
{
_putchar(' ');
}

for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

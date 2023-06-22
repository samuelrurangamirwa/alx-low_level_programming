#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
uint64_t a = 1, b = 2, c;
int i;

printf("%lu, %lu, ", a, b);

for (i = 0; i < 98; i++) 
{
c = a + b;
a = b;
b = c;

printf("%lu", b);
if (i < 97) 
{
printf(", ");
}
}

printf("\n");

return (0);
}

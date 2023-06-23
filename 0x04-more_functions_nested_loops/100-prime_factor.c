#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - Finds the largest prime factor of a number
* @n: The number to find the largest prime factor for
*
* Return: The largest prime factor of the number
*/
unsigned long largest_prime_factor(unsigned long n)
{
unsigned long i, largest;

largest = 0;

while (n % 2 == 0)
{
largest = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
if (i > largest)
{
largest = i;
}
n /= i;
}
}

if (n > 2 && n > largest)
{
largest = n;
}

return (largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long number = 612852475143;
unsigned long largest_prime;

largest_prime = largest_prime_factor(number);

printf("%lu\n", largest_prime);

return (0);
}

#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
_puts_recursion("Puts with recursion");
return (0);
}

#include "main.h"
/**
* _puts_recursion - function like puts();
* @s: input
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}

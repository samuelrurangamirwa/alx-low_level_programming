#include "main.h"

int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char str[] = "_putchar\n";
printString(str);
return (0);
}

/**
 * printString - Prints a string using _putchar
 * @str: The string to be printed
 */
void printString(const char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}

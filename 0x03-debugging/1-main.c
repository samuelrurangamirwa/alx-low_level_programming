#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function prints a message indicating the presence of
*              an infinite loop and another message for loop avoidance.
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Infinite loop incoming :(\n");

/*
* Commented out code block to prevent an infinite loop
*/
/*
* int i = 0;
* while (i < 10)
* {
* putchar(i);
* i++;
* }
*/

/*
* Print message to indicate successful infinite loop avoidance
* Description: This  avoidance of an infinite loop.
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}

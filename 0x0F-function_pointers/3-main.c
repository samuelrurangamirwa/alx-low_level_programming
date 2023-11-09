#include "3-calc.h"
/**
 * main - Simple calculator program
 *
 * Description:
 * This program performs arithmetic operations based on command-line arguments.
 *
 * @argc: The number of command-line arguments (expected: 4).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return:
 * 0 on success, 98 for argument count error, 99 for an invalid operator.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operation = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error\n");
return (99);
}

result = operation(num1, num2);
printf("%d\n", result);

return (0);
}

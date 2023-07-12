#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i,num;
int sum = 0;

if (argc < 2)
{
printf("0\n");
return 0;
}

for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);

if (num <= 0)
{
printf("Error\n");
return 1;
}

sum += num;
}

printf("%d\n", sum);
return 0;
}

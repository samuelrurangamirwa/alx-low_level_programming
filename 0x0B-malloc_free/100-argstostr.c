#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The number of arguments.
* @av: An array of strings representing the arguments.
*
* Return: A pointer to a new string containing concatenated arguments,
*         separated by newlines, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, total_len = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
total_len += len + 1;
len = 0;
}

str = (char *)malloc((total_len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}

for (i = 0, total_len = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[total_len++] = av[i][j];
}
str[total_len++] = '\n';
}

str[total_len] = '\0';

return (str);
}


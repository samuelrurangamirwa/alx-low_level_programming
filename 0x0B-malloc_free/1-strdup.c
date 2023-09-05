#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i = 0;

if (str == NULL)
{
return (NULL);
}

while (str[length] != '\0')
{
length++;
}

duplicate = malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}

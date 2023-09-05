#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize it.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: A pointer to the array, or NULL if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}

arr = malloc(size * sizeof(char));

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}

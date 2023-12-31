#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array.
* @array: The array to search in.
* @size: The number of elements in the array.
* @cmp: A pointer to the function to be used to compare values.
*
* Return: The index of the first element.
* If no element matches, return -1.
* If size is less than or equal to 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}

return (-1);
}

/**
 * _strcat - Concatenates two strings, modifying the destination string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;

while (dest[dest_len] != '\0')
{
dest_len++;
}

while (src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

dest[dest_len] = '\0';

return (dest);
}

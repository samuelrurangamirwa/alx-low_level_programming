/**
* rot13 - Encodes a string using ROT13.
* @str: Pointer to the string.
*
* Return: Pointer to the resulting string.
*/
char *rot13(char *str)
{
int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rot13_alphabet[j];
break;
}
}
}

return (str);
}

#include <stdlib.h>
#include <stdio.h>

/**
* is_separator - Checks if a character is a separator.
* @c: The character to check.
* @separators: A string containing separator characters.
*
* Return: 1 if the character is a separator, 0 otherwise.
*/
int is_separator(char c, char *separators)
{
while (*separators != '\0')
{
if (c == *separators)
{
return (1);
}
separators++;
}
return (0);
}

/**
* word_count - Counts the number of words in a string.
* @str: The input string.
* @separators: A string containing separator characters.
*
* Return: The number of words.
*/
int word_count(char *str, char *separators)
{
int count = 0;
int in_word = 0;

while (*str != '\0')
{
if (is_separator(*str, separators))
{
in_word = 0;
}
else if (in_word == 0)
{
count++;
in_word = 1;
}
str++;
}

return (count);
}

/**
* get_next_word - Extracts the next word from a string.
* @str: The input string.
* @separators: A string containing separator characters.
*
* Return: A dynamically allocated string containing the word.
*/
char *get_next_word(char *str, char *separators)
{
char *word;
int i;
int length = 0;

while (str[length] != '\0' && !is_separator(str[length], separators))
{
length++;
}

word = malloc((length + 1) * sizeof(char));

if (word == NULL)
{
return (NULL);
}

for (i = 0; i < length; i++)
{
word[i] = *str;
str++;
}
word[length] = '\0';

return (word);
}

/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: An array of dynamically allocated strings containing the words.
*         The last element of the array is NULL.
*/
char **strtow(char *str)
{
char **words;
int count;
int i = 0;

if (str == NULL || *str == '\0')
{
return (NULL);
}

count = word_count(str, " \t\n");

words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

while (*str != '\0')
{
if (!is_separator(*str, " \t\n"))
{
words[i] = get_next_word(str, " \t\n");
i++;
while (!is_separator(*str, " \t\n"))
{
str++;
}
}
else
{
str++;
}
}

words[i] = NULL;
return (words);
}


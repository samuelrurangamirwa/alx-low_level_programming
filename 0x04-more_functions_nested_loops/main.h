#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to be checked
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */
int _isupper(int c);
/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);


/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b);

void print_numbers(void);
int _putchar(char c);

void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
#endif /* MAIN_H */

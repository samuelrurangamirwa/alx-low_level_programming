#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function that prints a name using a function pointer */
void print_name(char *name, void (*f)(char *));

/* Function to print a name as is */
void print_name_as_is(char *name);

/* Function to print a name in uppercase */
void print_name_uppercase(char *name);

#endif /* FUNCTION_POINTERS_H */


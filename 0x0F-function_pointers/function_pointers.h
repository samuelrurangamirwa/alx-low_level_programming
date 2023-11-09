#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function that prints a name using a function pointer */
void print_name(char *name, void (*f)(char *));

/* Function to print a name as is */
void print_name_as_is(char *name);

/* Function to print a name in uppercase */
void print_name_uppercase(char *name);

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */


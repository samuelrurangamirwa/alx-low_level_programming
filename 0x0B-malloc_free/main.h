#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

#define MAX_BUFFER_SIZE 100
#endif

#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif

#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - print name function;
* @name : pointer
* @f: function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
		f(name);
}

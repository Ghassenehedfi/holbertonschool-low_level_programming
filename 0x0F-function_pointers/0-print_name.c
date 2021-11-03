#include "function_pointers.h"
/**
 * print_name - write name
 * @name: char
 * @f: function
 * Return: 0
 */
	void print_name(char *name, void (*f)(char *))
{

	if (f != NULL && name != NULL)
	f(name);
}

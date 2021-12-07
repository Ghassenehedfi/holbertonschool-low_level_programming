#include "main.h"
#include <strings.h>

/**
 *  _calloc - allocate memory for an array
 *  @nmemb: number of elements
 *  @size: size of each element
 *
 *  Return: pointer to arr
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, size * nmemb);

	return (ptr);
}

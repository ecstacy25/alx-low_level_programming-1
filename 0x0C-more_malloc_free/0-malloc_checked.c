#include <stdlib.h>

/**
 * *malloc_checked -  function that allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory or NULL or 98
 */

void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == NULL)
	exit(98);

return (m);
}

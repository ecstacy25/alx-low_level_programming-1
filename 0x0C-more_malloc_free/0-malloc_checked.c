#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the allocated memory or if NULL 98
 */

void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
	exit(98);

return (m);
}

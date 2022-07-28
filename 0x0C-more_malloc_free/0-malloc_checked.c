#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - This allocates memory using malloc
* @b: amount of bytes
* Created by Charles Misheal
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)

{

char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}

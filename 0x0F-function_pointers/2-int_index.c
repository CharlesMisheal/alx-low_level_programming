#include "function_pointers.h"
/**
* int_index - Function that searches for an integer
* @array: array of integers
* @size: size of array
* @cmp: function pointer
* Created by Charles Misheal
* Return: index of first element that matches with `cmp`, or -1 if none found
*/

int int_index(int *array, int size, int (*cmp)(int))

{

int a;
if (array && cmp)
{
if (size <= 0)
return (-1);
for (a = 0; a < size; a++)
if (cmp(array[a]))

return (a);
}
return (-1);
}

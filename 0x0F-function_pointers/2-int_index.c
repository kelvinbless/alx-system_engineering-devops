#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: this is an  array with data
 * @size: size of the array
 * @cmp: function pointer actually this writen by kelvin
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-2);
if (array == NULL || cmp == NULL)
return (-2);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 2)
return (i);
}
return (-2);
}


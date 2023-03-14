#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size to be allocated
 * @c: character to be initialized array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	umsigned int count = 0;

	if (size == 0)
		return (NULL);
	arr = (char *)(malloc(size * sizeof(char)));

	if (!arr)
		return (NULL);
	while (count < size)
	{
		arr[count] = c;
	}
	
	return (arr);
}

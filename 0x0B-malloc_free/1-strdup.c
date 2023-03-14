#include <stdlib.h>

/**
 * 1-strdup.c - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str:string to be copied
 *
 * Return: On success, the _strdup function returns a pointer to the
 * duplicated string. However, Returns NULL if dtr = NULL.
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}

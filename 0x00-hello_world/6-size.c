#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}

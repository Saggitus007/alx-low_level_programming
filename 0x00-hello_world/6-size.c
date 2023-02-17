#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("size of char: %ln byte(s)\n", sizeof(char));
	printf("size of int: %ln byte(s)\n", sizeof(int));
	printf("size of a long int: %ln byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ln byte(s)\n", sizeof(long long int));
	printf("size of float: %ln byte(s)\n", sizeof(float));
	return (0);
}

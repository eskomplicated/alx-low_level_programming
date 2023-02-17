#include <stdio.h> 

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
        printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(S)", sizeof(int));
	printf("size of a long int: %lu byte(S)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(S)", sizeof(float));
	return (0);
}	

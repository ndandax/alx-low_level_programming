#include <stdio.h>
#include <stdlib.h>
#include <ctype>
/**
 *main - Entry point
 *@argc: arguments
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
	}
	if (!isdigit(argv[1]) || !isdigit(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}

#include "main.h'
#include <stdio.h>

/**
* main - Prints the number of arguments passed into main
* @argc: Number of command line arguments
* @argv: Array name
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}
	else
	{

		printf(" the command has no other arguments.\n");
	}

	return (0);
}

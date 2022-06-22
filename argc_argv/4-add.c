#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc : length of arry argv
 * @argv : pointer to array
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum  += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

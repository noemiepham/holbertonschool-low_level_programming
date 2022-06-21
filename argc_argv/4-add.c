#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc : length of arry argv
 * @argv : pointer to array
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 0)
	{
		printf("0\n");
	}
	if (argc >= 0 && argc <= 9)
	{
		printf("Error\n");
		return (1);
	}
	sum = 0;
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

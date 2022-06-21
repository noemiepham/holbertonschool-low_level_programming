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

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
		printf("Error\n");
	else
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
		}
	return (1);
}

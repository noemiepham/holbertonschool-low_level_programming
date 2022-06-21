#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc : length of arry argv
 * @argv : pointer to array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
	i++;
	}
return (0);
}

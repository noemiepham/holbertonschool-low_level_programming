#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: arugment count
 * @argv: arugmnt valeur
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if ((ptr == NULL) || (argv[2][1]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
printf("%d\n", ptr(i, j));
return (0);
}

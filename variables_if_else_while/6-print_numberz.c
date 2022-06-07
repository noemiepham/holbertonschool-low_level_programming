#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void ft_number(void)
{
	int n; 

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n ++;
	}
}

int main(void)
{
	ft_number();
	write(1,"\n",1);
	return (0);
}

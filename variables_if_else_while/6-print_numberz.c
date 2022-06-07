#include <unistd.h>
/**
 * main - Entry point
 * ft_number - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz", 26);
		write(1, "\n", 1);
		i++;
	};
return (0);
}

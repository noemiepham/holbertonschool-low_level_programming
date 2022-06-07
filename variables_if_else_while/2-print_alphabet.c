#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
	write(1, "\n", 1);
	return (0);
}

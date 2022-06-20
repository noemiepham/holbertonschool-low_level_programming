#include "main.h"
/**
* is_prime_number - function return number prime;
* @n : number
* Return: 1 if i is prime
*/

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < 2)
		return (0);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
	i++;
	}
	return (1);
}

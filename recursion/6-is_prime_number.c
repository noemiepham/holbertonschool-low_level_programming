#include "main.h"

/**
 * checkPrime - checks to see if number is prime
 * @nb: factor check
 * @i: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */

int checkPrime(int nb, int i)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % i == 0)
		return (0);
	if (i * i > nb)
		return (1);
	else
		return (checkPrime(nb, i + 1));
}

/**
* is_prime_number - function return number prime;
* @n : number
* Return: 1 if i is prime
*/

int is_prime_number(int n)
{
	return (checkPrime(n, 2));
}

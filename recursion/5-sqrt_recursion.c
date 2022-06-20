#include "main.h"

/**
 * guess_number - checks the input number from n to the base
 * @x: number is squared and compared against base
 * @g: base number to check
 * Return: natural square root of number base
 */

int guess_number(int x, int g)
{
	if (x * x == g)
		return (x);
	if (x * x > g)
		return (-1);
	return (guess_number(x + 1, g));
}

/**
* _sqrt_recursion - square recursion
*@n : number to be square
* Return: sqr number
*/

int _sqrt_recursion(int n)
{
	return (guess_number(1, n));
}

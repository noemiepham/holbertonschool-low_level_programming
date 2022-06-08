/*
* File: 3. islower
* Auth: NoémePHAM
*/

#include "main.h"

/**
 * _islower - check if the character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if the letter is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int low;

	low = 97;
	while (low <= 122)
	{
		if (c >= 97 && c <= 122)
			return (1);
		else
			return (0);
	}
	low++;
return (0);
}

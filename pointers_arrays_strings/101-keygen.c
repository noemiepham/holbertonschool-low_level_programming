#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: non void
 *
 */
int main(void)
{
	int i, j, k, s;
	char key[58];
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			key[i] = c[j];
			s += c[j];
			i++;
		}

		while (c[k])
		{
			if (c[k] == (2772 - s))
			{
				key[i] = c[k];
				s += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	key[i] = '\0';
	printf("%s", key);
	return (0);
}

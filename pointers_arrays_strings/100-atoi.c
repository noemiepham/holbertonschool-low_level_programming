#include "main.h"
/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
     if (c > 47 && c < 58)
          return (1);

     return (0);
}
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer to be convert
 */
int _atoi(char *s)
{
     int number;
     int i = 0;
     int sign = 1;
     unsigned int value = 0;
     unsigned int pos = 1;

     for (number = 0; ((s[number] < '0') || (s[number] > '9')); number++)
     {
          if (s[number] == '-')
               sign *= -1;
     }
     for (; _isdigit(s[number]); number++)
     {
          i++;
     }
     while (i > 0)
     {
          value += ((s[number - 1] - 48) * pos);
          pos *= 10;
          i--;
          number--;
     }
     return (value * sign);
}

#include "main.h"
/**
*_atoi - copies the string pointed to by src
*@dest: destination
*@src: source
* Return: string
*/
int _atoi(char *s)
{

    int number = 0;
    int neg = *s[0] == '-';
    int i = neg ? 1 : 0;
    while (*s[i] >= '0' && *s[i] <= '9')
    {
      number *= 10; 
      number += *s[i] - '0';
      i ++;
    }
    if ( neg )
       number *= -1;

    printf( "string %s -> number %d", *s, number);
}

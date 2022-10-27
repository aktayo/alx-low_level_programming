#include "main.h"

/**
 * _strncat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * @n: first n letters of 2nd string
 * Return: pointer to dest
 */
void reverse_array(int *a, int n)
{
    int i;
    int j;
    for(i = 0; i < n; i++)
{
n--;
j = a[i];
a[i] = a[n];
a[n] = j;
}
}

#include "main.h"
/**
 *swap_int - Swap the value of variable
 *@a: variable value
 *@b: variable value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

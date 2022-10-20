#include "main.h"
/**
 *mul - multiply 2 variables
 *@a: the variable
 *@b: the variable
 * Return: ret product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}

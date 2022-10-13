#include <stdio.h>
/**
 * main - print_sizes
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %zu byte(s)\n", sizeof(a));
	printf("size of int: %zu byte(s)\n", sizeof(b));
	printf("size of long int: %zu byte(s)\n", sizeof(c));
	printf("size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}

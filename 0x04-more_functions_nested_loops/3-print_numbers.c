#include "main.h"
/**
 *mul - multiply 2 variables
 *@a: the variable
 *@b: the variable
 * Return: ret product of a and b
 */

void print_numbers(void)
{
  {
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i % 10 + '0');
		i++;
	}
	_putchar ('\n');
  }
}
int _putchar(char c)
{
  return (fwrite(1, &c, 1));
}
	int main(void)
{
    print_numbers();
    return (0);
}

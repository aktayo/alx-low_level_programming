#include "main.h"
/**
 *more_number - multiply 2 variables
 *
 * Return: ret product of a and b
 */

void print_diagonal(int n)
{
  int a, b;
  if (n <= 0)
  {
    _putchar('\n');
    for (a = 0; a < n; a++)
    {
      for (b = 0; b < a; b++)
         _putchar(' ');
       _putchar('\\');
       _putchar('\n');
    }
  }

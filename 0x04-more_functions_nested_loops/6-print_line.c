#include "main.h"
/**
 *print_line - multiply 2 variables
 *@n: no of times
 * Return: 0
 */

void print_line(int n)
{
  
  int i;
  
  if (n > 0)
  {
    for (i = 0; i < n; i++)
     _putchar('_'); 
  }
  _putchar('\n');
}

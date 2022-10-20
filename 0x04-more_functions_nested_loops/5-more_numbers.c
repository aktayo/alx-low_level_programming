#include "main.h"
/**
 *more_number - multiply 2 variables
 *
 * Return: ret product of a and b
 */

void more_numbers(void)
{
  int i, nu;
  for (i = 0; i <= 9; i++)
  {
    for (nu = 0; nu <= 14; nu++)
    {
      if (nu > 9)
      {
        _putchar(nu / 10 + '0');
      }
      _putchar((nu % 10) + '0');
    }
  }
      _putchar('\n');
}
                

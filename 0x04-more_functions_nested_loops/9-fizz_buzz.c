#include <stdio.h>
/**
 *print_square - print_square#
 *@size: no of times
 * Return: 0
 */

int main(void)
{
  int i;
  printf("1");
  for (i = 0; i <= 100; i++)
  {
    printf(" ");
    if (i % 3 == 0)
        printf("Fizz");
     if (i % 5 == 0)
       printf("Buzz");
    if (i % 3 != 0 && i % 5 != 0)
      printf("%d", n);
  }
  printf("\n");
    return (0);
}

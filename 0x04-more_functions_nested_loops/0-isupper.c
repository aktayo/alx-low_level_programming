#include "main.h"
/**
 * print_alphabet - Print all alphabet in lowercase
 *
 * Return: Alway 0
 */

int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return (1);
  }
  else
  {
    return (0);
  }
}
    
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

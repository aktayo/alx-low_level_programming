#include <unistd.h>
#include "main.h"
/**
 * _putchar.c - Entry point
 * @c: variable
 * Return: Alway 0
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}

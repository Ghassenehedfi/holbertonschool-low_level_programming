#include <stdio.h>
/**
 * main - prints alphabat
 * Return: 0
 */
int main(void)
{
  char c;
  for (c = 'a'; c <= 'z'; c++)
    {
      if (c == 'q'; c == 'e')
	continue;
      else
	putchar(c);
    }
  putchar('\n');
  return (0);
}

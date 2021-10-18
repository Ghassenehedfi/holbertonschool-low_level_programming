#include "main.h"
/**
  * _strspn - gets the length
  * @s: char
  * @accept: char
  * Return: 0
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, x = 0;

while (accept[a])
{
b = 0;
while (s[b] != 32)
{
if (accept[a] == s[b])
{
x++;
}
b++;
}
a++;
}
return (x);
}

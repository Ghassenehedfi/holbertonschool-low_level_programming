/**
 * _puts_recursion - print string
 * @s: char
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
{
	_putchar(*s);
	s++;
}
	_putchar('\n');
}

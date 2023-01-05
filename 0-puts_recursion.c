#include "main.h"
/**
 * _puts_recursion - prints of strings
 * @s: pointer nlock of memory to fill
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}

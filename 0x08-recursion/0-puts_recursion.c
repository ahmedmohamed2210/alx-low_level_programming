#include "main.h"
/**
 * _puts_recursion - print by Recursion
 *
 * @s:input
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*S)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}

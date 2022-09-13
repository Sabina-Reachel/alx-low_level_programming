#include "main.h"
#include "_putchar.h"

/**
 * main - prints _putchar
 *
 * description: prints _putchar
 *
 * Return: 0 (Success);
 */
int main(void)
{
	char *sh = "_putchar"
	
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}


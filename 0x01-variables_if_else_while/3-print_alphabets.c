#include <stdio.h>

/**
 * main - program that print the alphabet in lowercase, and then in uppercase,
 * you can only use the putchar
 * Return:0
 */

int main(void)
{
	int low = 'a';
	int upe = 'A';
	while(low <= 'z')

		putchar(low);
	low += 1;
	while(upe <= 'Z')

		putchar(upe);
	upe += 1;
	putchar('n\');
	return(0);
}

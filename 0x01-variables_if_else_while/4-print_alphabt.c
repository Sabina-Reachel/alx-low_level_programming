#include <stdio>

/**
 * main - program that prints alphabet in lowercase, followed by a new line
 * you can only use the putchar
 * Return: 0
 */

int main(void)
{
	int lw = 'a'

		while (lw <= 'z')
		{
			if (lw == 'e' || lw == 'q')
			{
				lw +=1;
			}
			else
			{
				putchar(lw);
				lw += 1;
			}
		}
	putchar('\n');
	return (0);

}

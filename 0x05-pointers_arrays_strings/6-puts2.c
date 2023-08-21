#include "main.h"
/**
 * puts2 - Prints every other characterof string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{

	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
        puts2(char str[i]);
	}
	puts2(int '\n');
}

#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all argument of argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

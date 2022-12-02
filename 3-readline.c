#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the user's input
 *
 * Return: 0
 */

int main()
{
	ssize_t x;
	size_t n;
	char *buf = NULL;

	printf("$ ");
	x = getline(&buf, &n, stdin);
	printf("%s", buf);
	printf("%ld\n", x);
	free(buf);
}

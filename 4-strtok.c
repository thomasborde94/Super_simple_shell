#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char strarray[](char str[], char *delim, char *token, char array[])
{
	int i = 0;

	while (token)
	{
		token = strtok(NULL, delim);
		array[i] = token;
		i++;
	}
	return (array);
	
}

/**
 * main - tokenizes a string
 * Return: 0
 */

int main()
{
	char str[] = "cool life dude idc";
	char *delim = " ";
	char *token;
	char array[];
	char tokenarray[];
	int i = 0;
	

	token = strtok(str, delim);	

	while (token)
	{
		tokenarray = strarray(str, delim, token, array);
	}
	for (i; tokenarray[i]; i++)
	{
		printf("%s\n", tokenarray[i];
	}
	return (0);
}

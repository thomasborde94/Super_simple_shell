#include "simple.h"

void printspath(void)
{
	char *token, *path_copy = NULL;
        const char *temp = getenv("PATH");

        path_copy = malloc(strlen(temp) + 1);
        strcpy(path_copy, temp);

        token = strtok(path_copy, ":");
        while (token)
        {
                printf("%s\n", token);
                token = strtok(NULL, ":");
        }
}

int main(void)
{
	printspath();
	return (0);
}

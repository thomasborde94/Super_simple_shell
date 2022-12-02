#include "simple.h"

int main(int argc, char **argv)
{
	unsigned int i = 1;
	char *cmd = argv[1];
	char *path = "/bin/";
	char *final = NULL;
	struct stat st;

	final = malloc(sizeof(char) * (strlen(cmd) + strlen(path) + 1));
	strcat(final, path);
	strcat(final, cmd);
	while (argv[i])
	{
		if (stat(path, &st) == 0)
			printf("FOUND\n");
		else
		{
			printf("not found\n");
		}
		printf("path is %s\n", path);
		printf("cmd is %s\n", cmd);
		printf("final string is %s\n", final);
		i++;
	}
	return (0);
}

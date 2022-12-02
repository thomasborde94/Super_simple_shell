#include "simple.h"

char *find_path(char *buffer)
{
	int notfound = 0;
	char *token, *path = NULL, *path_copy = NULL;
	const char *temp = _getenv("PATH");
	struct stat st;

/* COPIE de PATH*/
	path_copy = malloc(strlen(temp) + 1);
	_strcpy(path_copy, temp);

	token = strtok(path_copy, ":");
	while(token)
	{
		path = malloc(sizeof(char) * (_strlen(token) + _strlen(buffer) + 1));
		_strcat(path, token);
		_strcat(path, "/");
		_strcat(path, buffer);
		if (stat(path, &st) == 0)
		{
			notfound = 1;
			free(path_copy);
			return (path);
			break;
		}
		token = strtok(NULL, ":");
	}
	if (notfound == 0)
		printf("NOT FOUND\n");
}

int main(int argc, char **argv)
{
	char *buffer = "ls";
	char *cmd;
	cmd = find_path(buffer);
	printf("%s\n", cmd);
	free(cmd);
	return (0);
}

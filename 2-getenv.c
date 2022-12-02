#include "simple.h"

char *_getenv(const char *name)
{
	char *token = NULL, *buffer;
	char **env_copy = environ;
	int i = 0;

        while (environ[i])
        {
                i++;
        }

        env_copy = malloc(sizeof(char *) * i + sizeof(char *));
        for (i = 0; environ[i]; i++)
        {
                env_copy[i] = strdup(environ[i]);
        }
	env_copy[i] = NULL;

	i = 0;
	while (env_copy[i])
	{
		token = strtok(env_copy[i], "=");
		if (strcmp(name, token) == 0)
			break;
		i++;
	}
	token = strtok(NULL, "=");
	buffer = strdup(token);
	for (i = 0; env_copy[i]; i++)
	{
		free(env_copy[i]);
	}
	free(env_copy[i]);
	free(env_copy);
	return (buffer);
}


int main()
{
	char *buffer = _getenv("PATH");
/*	printf("PATH : %s\n", _getenv("PATH", buffer));*/
	printf("%s\n", buffer);
/*	printf("HOME : %s\n", _getenv("HOME", buffer));
	printf("ROOT : %s\n", _getenv("ROOT", buffer));
	printf("LANG : %s\n", _getenv("LANG", buffer));*/
	free(buffer);
	return (0);
}

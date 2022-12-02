#include "simple.h"

/**
 * main - executes command ls -l /tmp in 5 different child processes
 *
 */

int main(void)
{
	pid_t pid;
	int i = 0;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	while (i < 5)
	{
		pid = fork();
		if (pid == 0)
		{
			execve(argv[0], argv, NULL);
		}
		wait(NULL);
		printf("Just executed child %d\n", i);
		i++;
	}

	if (pid != 0)
	{
		printf("Parent finishing processing\n");
	}
	printf("Done with execve\n");
	return 0;
}

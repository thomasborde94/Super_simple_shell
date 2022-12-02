#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid, ppid;

	pid = fork();
	if (pid == -1)
	{
		perror("Unsuccessful\n");
			return 1;
	}
	if (pid == 0)
	{
		sleep(20);
		printf("I am the child\n");
	}
	else
	{
		ppid = getpid();
		printf("Parent pid is %u\n", ppid);
	}
	return (0);
}

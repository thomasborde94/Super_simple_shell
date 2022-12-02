#include <stdio.h>
#include <unistd.h>

/**
 */

int main()
{
	char *argv[] = {"/bin/ls", "-l", NULL};

	int val = execve(argv[0], argv, NULL);
	if (val == -1)
		printf("error\n");
	printf("Done with execve\n");
	return (0);
}

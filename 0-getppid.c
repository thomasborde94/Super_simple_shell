#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



/**
 * main - executes _getpid
 * 
 * Return: 0
 */

int main()
{
	pid_t my_ppid, my_pid;

	my_ppid = getppid();
	my_pid = getpid();
	printf("the pid is %u, the ppid is %u\n", my_pid, my_ppid);
	return (0);
}

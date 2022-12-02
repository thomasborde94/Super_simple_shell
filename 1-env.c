#include "simple.h"

int main(int argc, char *argv[], char **env)
{
	printf("adress of environ is %p\n", *environ);
	printf("adress of env in main arguments is %p\n", *env);
	return (0);
}

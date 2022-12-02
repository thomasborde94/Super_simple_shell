#include "simple.h"

int main(int ac, char **av)
{
	for (; *environ; environ++)
	{
		printf("%s\n", *environ);
      	}
    return (0);
}

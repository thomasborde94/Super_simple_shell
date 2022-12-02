#ifndef __SUPER_SIMPLE__
#define __SUPER_SIMPLE__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

extern char **environ;
#endif

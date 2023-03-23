#include "main.h"
#include <unistd.h>

/**
 * _putchar: writec the character c to stdout
 * return 1 on success and -1 on error
 */

int _putchar(char c)
{
	return(write(1, &c,1));
}


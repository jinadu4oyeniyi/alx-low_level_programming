#include "main.h"


/**
 * _isupper: checks for uppercase 
 * @c: the character to check
 *
 * Returns: 1 if upper or 0 otherwise
 */

int _isupper(int c)
{
	if (c >='A' && c <= 'Z')
		return(1);
	else
		return(0);
}

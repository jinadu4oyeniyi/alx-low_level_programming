#include "main.h"

/**
 * _isalpha - checs for alphabetic character
 * @c: is the checked character
 * Returns: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z'));
}

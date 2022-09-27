#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer (pointer to pointer of type char)
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{

	*s = to;
}

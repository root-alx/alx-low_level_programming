#include "main.h"
/**
*int _strlen-_calculates_the_length_of_string
*@s:_pointer_to_string_length
*return_string_length
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != 0)
{
length++;
}
return (length);
}

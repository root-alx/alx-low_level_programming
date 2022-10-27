#include "main.h"
/**
*int _strlen-calculates_the_length_of_string
*@s:pointer_to_string_length
*return_the_length_of_strlen
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

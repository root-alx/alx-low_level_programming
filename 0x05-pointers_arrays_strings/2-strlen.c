#include "main.h"
/**
*int _strlen_function-calculates_the_length_of_string
*@s:pointer_to_string_length
*return_the_length_of_strlen_fuction
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

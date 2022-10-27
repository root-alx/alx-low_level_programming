#include "main.h"
/**
*swap_int-swap values of two pointers
*@a:first_pointer
*@b:second_pointer
*return_void_or_nothing
*/
void swap_int(int *a, int *b)
{
  int temp = *a;
  a* = *b;
  *b = temp;
}

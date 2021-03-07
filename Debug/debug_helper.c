

#include "debug_helper.h"

// Assumes little endian
//https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format
void printBits(size_t const size, void const * const ptr)
{
  unsigned char *b = (unsigned char*) ptr;
  unsigned char byte;
  int i, j;

  printf("0b");

  for (i = size-1; i >= 0; i--)
  {
    for (j = 7; j >= 0; j--)
    {
      byte = (b[i] >> j) & 1;
      printf("%u", byte);
    }
  }
puts("");
}


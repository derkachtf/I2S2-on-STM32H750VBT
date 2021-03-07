

#ifndef __DEBUG_HELPER_H
#define __DEBUG_HELPER_H
#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <strings.h>
#include <stdio.h>


void printBits(size_t const size, void const * const ptr);

#ifdef __cplusplus
}
#endif
#endif  // __DEBUG_HELPER_H
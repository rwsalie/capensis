#include "./string.h"


void*
memset(void* addr, char val, unsigned long size)
{
    char* mem = (char*) addr;
    for (; size != 0; size--)
        *mem++ = val;

    return addr;
}

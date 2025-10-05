#include "string.h"

void*
memcpy(void* dest, const void* src, unsigned long size)
{
    char*       d = (char*) dest;
    const char* s = (char*) src;

    while (size--)
        *d++ = *s++;

    return dest;
}

void*
strcpy(char* dest, const char* src)
{
    char* d = (char*) dest;

    while (*src)
        *d++ = *src++;
    *d = '\0';

    return dest;
}

void*
memset(void* addr, char val, unsigned long size)
{
    char* mem = (char*) addr;
    while (size--)
        *mem++ = val;

    return addr;
}

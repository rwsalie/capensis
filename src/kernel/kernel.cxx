#include "../lib/libc/string.h"
#include "kernel.hxx"


char* Kernel::__bss_end = __bss_end;
char* Kernel::__bss     = __bss;

Kernel::Kernel() { memset(__bss, 0, __bss_end - __bss); }


auto
Kernel::put_char(char c) -> void
{
    arch.syscall((struct ArchRegistersSysCall) { c, 0, 0, 0, 0, 0, 0, 1 });
}


auto
Kernel::puts(char* c) -> void
{
    while (*c)
    {
        put_char(*c);
        c++;
    }
}

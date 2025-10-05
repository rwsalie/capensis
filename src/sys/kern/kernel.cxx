#include "arch.hxx"
#include "string.h"
#include "kernel.hxx"

char* Kernel::__bss_end = __bss_end;
char* Kernel::__bss     = __bss;

Kernel::Kernel()
{
    memset(__bss, 0, __bss_end - __bss);
    arch = Arch();
}

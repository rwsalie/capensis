#include "arch.hxx"

#ifndef __KERNEL
#define __KERNEL

class Kernel
{
private:
    static char *__bss, *__bss_end;
    Arch         arch;

public:
    Kernel();

    [[noreturn]] ~Kernel()
    {
        arch.cli();
        for (;;)
            arch.hlt();
        // Unreachable;
    }

    inline Arch*
    get_arch()
    {
        return &this->arch;
    }
};

#endif

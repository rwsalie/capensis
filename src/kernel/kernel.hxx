#include "arch/arch.hxx"

#ifndef __KERNEL
#define __KERNEL

class Kernel
{
private:
    static char *__bss, *__bss_end;
    Arch         arch;

public:
    Kernel();

    auto
    put_char(char) -> void;

    auto
    puts(char*) -> void;


    [[noreturn]] ~Kernel()
    {
        puts((char*) "end...");
        for (;;)
            ;
        // Unreachable;
    }

    inline Arch*
    get_arch()
    {
        return &this->arch;
    }
};

#endif

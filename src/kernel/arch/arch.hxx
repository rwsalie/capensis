#ifndef __ARCH
#define __ARCH


#ifdef __riscv
#include "riscv32.hxx"
#else
#error "not yet."
#endif

class Arch
{
public:
    auto syscall(ArchRegistersSysCall) -> void;

    Arch()  = default;
    ~Arch() = default;
};

#endif

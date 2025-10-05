#ifndef __ARCH
#define __ARCH

#ifdef __riscv
#include "arch/riscv32.hxx"
// #elif defined(__aarch64__)
// #include "arm64.hxx"
#else
#error "not yet."
#endif


enum Syscall
{
    PUTCHAR = 0
};


class Arch
{
public:
    template<Syscall, typename... args>
    static auto syscall(args...) -> void;

    auto cli() -> void;
    auto hlt() -> void;

    Arch()  = default;
    ~Arch() = default;
};

#endif

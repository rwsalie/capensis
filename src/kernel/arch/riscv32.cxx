#include "riscv32.hxx"
#include "arch.hxx"

auto
Arch::syscall(ArchRegistersSysCall reg) -> void
{
    register long a0 __asm__("a0") = reg.a0;
    register long a1 __asm__("a1") = reg.a1;
    register long a2 __asm__("a2") = reg.a2;
    register long a3 __asm__("a3") = reg.a3;
    register long a4 __asm__("a4") = reg.a4;
    register long a5 __asm__("a5") = reg.a5;
    register long a6 __asm__("a6") = reg.a6;
    register long a7 __asm__("a7") = reg.a7;

    __asm__ __volatile__(
        "ecall"
        : "=r"(a0), "=r"(a1)
        : "r"(a0), "r"(a1), "r"(a2), "r"(a3), "r"(a4), "r"(a5), "r"(a6), "r"(a7)
        : "memory"
    );
}

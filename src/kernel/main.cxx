#include "kernel.hxx"

extern char __stack_top[];

extern "C"
{
    [[noreturn]] auto
    boot() -> void
    {
        __asm__ __volatile__(
            "mv sp, %[stack_top]\n"  // Set the stack pointer
            "j kmain\n"              // Jump to the kernel main function
            :
            : [stack_top] "r"(
                __stack_top
            )  // Pass the stack top address as %[stack_top]
        );
    }


    auto
    kmain() -> void
    {
        Kernel kern;
        kern.puts((char*) "eee\n");
    }
}

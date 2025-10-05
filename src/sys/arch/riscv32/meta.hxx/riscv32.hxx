#ifndef __ARCH_RISCV
#define __ARCH_RISCV

#pragma pack(push, 1)
class Registers
{
public:
    auto save_state() -> void;
    auto ecall() -> void;

    long ra, gp, tp;
    long a[8]{ 0 };
    long t[7]{ 0 };
    long s[12]{ 0 };
};
#pragma pack(pop)


namespace types
{

typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef uint32_t           size_t;
typedef uint32_t           paddr_t;
typedef uint32_t           vaddr_t;

#define NULL ((void*) 0)
#define align_up(value, align) __builtin_align_up(value, align)
#define is_aligned(value, align) __builtin_is_aligned(value, align)
#define offsetof(type, member) __builtin_offsetof(type, member)
#define va_list __builtin_va_list
#define va_start __builtin_va_start
#define va_end __builtin_va_end
#define va_arg __builtin_va_arg

};

#endif

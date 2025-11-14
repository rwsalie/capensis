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

class Cpu
{
};


namespace types
{

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;
typedef u32                size_t;
typedef u32                paddr_t;
typedef u32                vaddr_t;

constexpr void* nullptr_t = 0;
#define align_up(value, align) __builtin_align_up(value, align)
#define is_aligned(value, align) __builtin_is_aligned(value, align)
#define offsetof(type, member) __builtin_offsetof(type, member)
#define va_list __builtin_va_list
#define va_start __builtin_va_start
#define va_end __builtin_va_end
#define va_arg __builtin_va_arg

};

#endif

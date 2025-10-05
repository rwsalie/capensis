#ifndef __LIBCXX_STR
#define __LIBCXX_STR

#include "vec.hxx"
#include "optional.hxx"

class str : vec<unsigned char>
{
    str(char*);
    str(char);

    auto substr(unsigned long, unsigned long) -> Optional<str>;

    template<typename T = str>
    auto find(T) -> Optional<unsigned long>;
};

#endif

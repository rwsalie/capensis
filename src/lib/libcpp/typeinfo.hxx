#ifndef __LIBCXX_TYPEINFO
#define __LIBCXX_TYPEINFO

#include "str.hxx"


class typeinfo
{
public:
    str  name;
    auto operator=(const typeinfo& other) -> typeinfo& = delete;
};

template<typename T>
auto
_typeid(T t) -> str
{
    return str(t);
}

#endif

#ifndef __LIBCPP_ANY
#define __LIBCPP_ANY

#include <typeinfo.hxx>

class any
{
public:
    any();
    template<typename T>
    any(T);
    template<typename T>
    any(T&);
    template<typename T>
    any(T&&);
    ~any() = default;
};


template<class T>
auto
any_cast(any& a) -> T
{
    T t;
    assert(_typeid(t) == _typeid(a));
    return a;
}

#endif

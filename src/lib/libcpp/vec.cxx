#ifndef __LIBCXX_VEC
#define __LIBCXX_VEC

template<typename T>
class vec
{
private:
    T*            data{ nullptr };
    unsigned long size{ 0 };
    unsigned long capacity{ 0 };

public:
    vec();
    vec(T[]);
    vec(vec&);
    ~vec();

    auto push() -> void;
    auto rem() -> T;
    auto get(unsigned long) -> T*;
};


#endif

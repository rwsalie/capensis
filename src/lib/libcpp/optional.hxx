#ifndef __LIBCXX_OPTIONAL
#define __LIBCXX_OPTIONAL

template<typename T>
class Optional
{
private:
    bool null{ true };
    T&   val{ nullptr };

public:
    Optional() = default;
    Optional(T&);
    ~Optional();


    auto
    is_null() -> bool
    {
        return null;
    }

    auto
    get() -> T&
    {
        return val;
    }
};

class nullable_bool : Optional<bool>
{
};

template<typename Ok, typename Err>
class Result
{
private:
    union
    {
        Ok  ok;
        Err err;
    };
    bool is_ok;
    bool is_err;

public:
};

#endif

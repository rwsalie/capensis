export module capensis.lib.libcpp:optional;

namespace lib::libcpp
{

template<typename T>
export class Optional
{
private:
    bool null{ true };
    T    val{};

public:
    Optional() = default;
    Optional(T);
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

export class NullableBool : Optional<bool>
{
};

}

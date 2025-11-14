export module capensis.lib.libcpp:any;

class Any
{
public:
    Any();
    template<typename T>
    Any(T);
    template<typename T>
    Any(T&);
    template<typename T>
    Any(T&&);
    ~Any() = default;
};


template<class T>
auto
any_cast(Any& a) -> T
{
    T t;
    assert(_typeid(t) == _typeid(a));
    return a;
}

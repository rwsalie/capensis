export module capensis.lib.libcpp;


namespace libcpp
{

class typeinfo
{
public:
    Str  name;
    auto operator=(const typeinfo& other) -> typeinfo& = delete;
};

template<typename T>
auto
_typeid(T t) -> str
{
    return str(t);
}

}

export module capensis.lib.libcpp;

namespace lib::libcpp
{

class Str : vec<unsigned char>
{
    Str(char*);
    Str(char);

    auto substr(unsigned long, unsigned long) -> Optional<Str>;

    template<typename T = Str>
    auto find(T) -> Optional<unsigned long>;
};

}

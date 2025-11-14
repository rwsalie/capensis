export module capensis.sys:arch;

namespace sys
{

export enum Syscall { PUTCHAR = 0 };


export class Arch
{
public:
    template<Syscall, typename... args>
    static auto syscall(args...) -> void;

    auto cli() -> void;
    auto hlt() -> void;

    Arch()  = default;
    ~Arch() = default;
};

}

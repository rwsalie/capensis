export module capensis.sys.kern:kernel;


namespace sys::kern
{

export class Kernel
{
private:
    static char *__bss, *__bss_end;
    const Arch   arch;

public:
    Kernel() {}

    [[noreturn]] ~Kernel()
    {
        arch.cli();
        for (;;)
            arch.hlt();
        // Unreachable;
    }

    inline auto
    get_arch() -> Arch*
    {
        return &this->arch;
    }
};

}

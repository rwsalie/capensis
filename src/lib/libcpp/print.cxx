#include "print.hxx"

auto
println() -> void
{
}

auto
println(const char* c) -> void
{
}

template<typename... Args>
auto
println(const char* c, Args...) -> void
{
}

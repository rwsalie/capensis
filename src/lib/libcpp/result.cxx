namespace lib::libcpp
{

template<typename T, typename U>
export class Result
{
private:
    union
    {
        T ok;
        U err;
    };
    bool is_ok;
    bool is_err;

public:
    Result();
    Result(T);
    Result(U);
};

}

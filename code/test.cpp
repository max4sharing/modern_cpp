#include <iostream>

// 采用 16 位的 enum
enum smallenum : int16_t
{
    a,
    b,
    c
};

// color 可为 red （值 0 ）、 yellow （值 1 ）、 green （值 20 ）或 blue （值 21 ）
enum color
{
    red,
    yellow,
    green = 20,
    blue
};

// altitude 可为 altitude::high 或 altitude::low
enum class altitude : char
{
    high = 'h',
    low = 'l', // C++11 允许尾随逗号
};

// 常量 d 为 0 ，常量 e 为 1 ，常量 f 为 3
enum
{
    d,
    e,
    f = e + 2
};

// 枚举类型（有作用域和无作用域）能拥有重载的运算符
std::ostream &operator<<(std::ostream &os, color c)
{
    switch (c)
    {
    case red:
        os << "red";
        break;
    case yellow:
        os << "yellow";
        break;
    case green:
        os << "green";
        break;
    case blue:
        os << "blue";
        break;
    default:
        os.setstate(std::ios_base::failbit);
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, altitude al)
{
    return os << static_cast<char>(al);
}

int main()
{
    color col = red;
    altitude a;
    a = altitude::low;

    std::cout << "col = " << col << '\n'
              << "a = " << a << '\n'
              << "f = " << f << '\n';
}
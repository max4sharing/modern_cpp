#include <iostream>
#include <tuple>

std::tuple<int, double, std::string> f()
{
    return std::make_tuple(1, 2.3, "456");
}

int main()
{
    // C++17
    auto [x, y, z] = f();
    std::cout << x << ", " << y << ", " << z << std::endl;
    //C++11
    int a, b, c;
    std::tie(a, b, c) = f();

    std::cout << a << ", " << b << ", " << c << std::endl;
    return 0;
}
#include <iostream>
#include <functional>
template <typename U, typename Y>
auto add(U x, Y y) -> decltype(auto) { return x + y; }
int main()
{
    [out = std::ref(std::cout << "Result from C code: " << add(1, 2))]() {
        out.get() << ".\n";
    }();
    return 0;
}

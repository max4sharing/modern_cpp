#include <iostream>
#include <string>

template <typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
  return t + u;
}

int main() {
  std::string s1("Hello, "), s2("World");
  auto x = add(1, 2.3);
  auto y = add(s1, s2);
  //  auto z = add(s1, 1.0); // Fails - std::string + double is not defined

  std::cout << x << std::endl;
  std::cout << y << std::endl;

  return 0;
}


[捕获列表](参数列表) mutable(可选) 异常属性 -> 返回类型 {// 函数体}
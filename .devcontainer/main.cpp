#include <iostream>
#include <string_view>

int main() {
    constexpr std::string_view message = "Hello, modern C++!";
    std::cout << message << std::endl;
    return 0;
}

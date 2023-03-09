#include <iostream>
#include <string>

auto main() -> int {
    std::string input{ "Cat :3 Dog" };
    for (size_t i{ 0 }; i < input.size(); ++i) {
        std::cout << input[i] << ' ' << static_cast<int>(input[i]) << '\n';
    }

    return 0;
}
#include "caesar.h"

auto shiftChar(char c, int rShift) -> char {
    int lowerCase{ -1 };
    if (static_cast<int>(c) >= 65 && static_cast<int>(c) <= 90) lowerCase = 0;
    if (static_cast<int>(c) >= 97 && static_cast<int>(c) <= 122) lowerCase = 1;
    
    char newChar{ c };
    if (lowerCase == 0) {
        newChar = static_cast<char>(static_cast<int>(c) + rShift > 90 ? 
                    64 + ((static_cast<int>(c) + rShift) - 90) : static_cast<int>(c) + rShift);

        if (static_cast<int>(newChar) < 65)
            newChar = static_cast<char>(90 - (65 - static_cast<int>(newChar)) + 1);
        if (static_cast<int>(newChar) > 90)
            newChar = static_cast<char>(65 + (65 - static_cast<int>(newChar)) + 1);
    }

    if (lowerCase == 1) {
        newChar = static_cast<char>(static_cast<int>(c) + rShift > 122 ? 
                    96 + ((static_cast<int>(c) + rShift) - 122) : static_cast<int>(c) + rShift);

        if (static_cast<int>(newChar) < 97)
            newChar = static_cast<char>(122 - (97 - static_cast<int>(newChar)) + 1);
        if (static_cast<int>(newChar) > 122)
            newChar = static_cast<char>(97 + (97 - static_cast<int>(newChar)) + 1);
    }

    return newChar;
}

auto encryptCaesar(std::string string, int rShift) -> std::string {
    std::string newString{};
    newString.reserve(string.size());

    for (size_t i{ 0 }; i < string.length(); ++i) {
        newString += shiftChar(string[i], rShift);
    }

    return newString;
}
#include "vigenere.h"

auto returnLetterNum(char c) -> int {
    if (static_cast<int>(c) >= 65 && static_cast<int>(c) <= 90) {
        return 1 + (static_cast<int>(c) - 65);
    }
    if (static_cast<int>(c) >= 97 && static_cast<int>(c) <= 122) {
        return 1 + (static_cast<int>(c) - 97);
    }
    
    return 0;
}

auto encryptVigenere(std::string string, std::string keyword) -> std::string {
    std::string newString{};
    std::string newKey{};
    newKey.reserve(string.size());
    newString.reserve(string.size());

    size_t j{ 0 };
    for (size_t i{ 0 }; i < string.length(); ++i) {
        if (j >= keyword.length()) 
            j = 0;

        if ((static_cast<int>(string[i]) >= 65 && static_cast<int>(string[i]) <= 90) || 
            (static_cast<int>(string[i]) >= 97 && static_cast<int>(string[i]) <= 122)) {
                newKey += keyword[j];
                ++j;
        }
        else 
            newKey += string[i];

    }

    for (size_t i{ 0 }; i < string.length(); ++i) {
        if ((static_cast<int>(string[i]) >= 65 && static_cast<int>(string[i]) <= 90) || 
            (static_cast<int>(string[i]) >= 97 && static_cast<int>(string[i]) <= 122)) {
                newString += shiftChar(string[i], (returnLetterNum(newKey[i]) - 1));
            }
        else
            newString += string[i];
    }

    return newString;
}
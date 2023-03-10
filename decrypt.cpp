#include "decrypt.h"

auto decryptCaesar(std::string string, int rShift) -> std::string {
    std::string newString{};
    newString.reserve(string.size());

    for (size_t i{ 0 }; i < string.length(); ++i) {
        newString += shiftChar(string[i], (0 - rShift));
    }

    return newString;
}

auto decryptVigenere(std::string string, std::string keyword) -> std::string {
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
                newString += shiftChar(string[i], 0 - (returnLetterNum(newKey[i]) - 1));
            }
        else
            newString += string[i];
    }

    return newString;
}
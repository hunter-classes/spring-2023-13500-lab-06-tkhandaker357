#include <iostream>
#include "decrypt.h"

auto main() -> int {
    std::cout << "original: \"Hello, World!\"\ncaesar cypher, 10 shift right: " << encryptCaesar("Hello, World!", 10) << '\n';
    std::cout << "original: \"Hello, World!\"\nvigenere cypher: " << encryptVigenere("Hello, World!", "cake") << '\n';

    std::cout << '\n' << "decrypted caesar cypher of \"Rovvy, Gybvn!\": " << decryptCaesar("Rovvy, Gybvn!", 10);
    std::cout << '\n' << "decrypted vigenere cypher of \"Jevpq, Wyvnd!\": " << decryptVigenere("Jevpq, Wyvnd!", "cake");
    
    std::cout << '\n';
    return 0;
}

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "decrypt.h"

TEST_CASE("testing shiftChar function") {
    CHECK(shiftChar('W', 5) == 'B');
    CHECK(shiftChar('O', 5) == 'T');
}

TEST_CASE("testing encryptCaesar function") {
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

TEST_CASE("testing encryptVigenere function") {
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("I love programming!!!!!", "estrogen") == "M dhms vvbkjtdaort!!!!!");
}

TEST_CASE("testing decryptCaesar function") {
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("M dhms vvbkjtdaort!!!!!", "estrogen") == "I love programming!!!!!");
}
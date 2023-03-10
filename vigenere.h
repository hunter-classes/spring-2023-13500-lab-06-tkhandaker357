#ifndef VIGENERE_H
#define VIGENERE_H

#include "caesar.h"

auto returnLetterNum(char letter) -> int;
auto encryptVigenere(std::string string, std::string keyword) -> std::string;

#endif
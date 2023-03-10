#ifndef DECRYPT_H
#define DECRYPT_H

#include "vigenere.h"

auto decryptCaesar(std::string string, int rShift) -> std::string;
auto decryptVigenere(std::string string, std::string keyword) -> std::string;

#endif
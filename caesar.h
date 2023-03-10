#ifndef CASESAR_H
#define CAESAR_H

#include <iostream>
#include <string>

auto shiftChar(char c, int rShift) -> char;
auto encryptCaesar(std::string string, int rShift) -> std::string;

#endif
#pragma once
#include <vector>
#include <string>

class Compressor {
public:
    Compressor();

    std::string compress(const std::string& input);
    std::string decompress(const std::string& input);
};

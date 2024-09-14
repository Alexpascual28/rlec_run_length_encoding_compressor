#pragma once
#include <vector>
#include <string>

/**
 * @brief Compression and decompression system for strings using the Run-Length Encoding algorithm.
 */
class Compressor {
public:
    // Class constructor
    Compressor();

    // Class methods to compress and decompress strings
    std::string compress(const std::string& input);
    std::string decompress(const std::string& input);
};

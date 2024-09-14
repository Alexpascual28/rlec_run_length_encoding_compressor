#include "file_compression_system.h"
#include <iostream>

/**
 * @brief Main function. It compresses or decompresses the input string based on the command line arguments.
 *        If the first argument is "compress", it compresses the input string. If the first argument is "decompress",
 *        it decompresses the input string. Usage: ./rlec compress <input string> or ./rlec decompress <input string>
 *        Uses the Compressor class in file_compression_system.cpp to compress or decompress the input string.
 * 
 * @param argc number of passed arguments
 * @param argv list of arguments
 * @return int 
 */
int main(int argc, char *argv[]) {
    if (argc > 3) {
        std::cerr << "Usage: ./rlec compress <input string> or ./rlec decompress <input string>" << std::endl;
        return 1;
    }
    else {
        Compressor compressor;
        if (std::string(argv[1]) == "compress") {
            std::cout << compressor.compress(argv[2]) << std::endl;
        }
        else if (std::string(argv[1]) == "decompress") {
            std::cout << compressor.decompress(argv[2]) << std::endl;
        }
        else {
            std::cerr << "Usage: ./rlec compress <input string> or ./rlec decompress <input string>" << std::endl;
            return 1;
        }
    }
}

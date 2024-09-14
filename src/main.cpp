#include "file_compression_system.h"
#include <iostream>

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

#include "file_compression_system.h"
#include <iostream>

void testDecompress(const std::string& input, const std::string& expectedOutput) {
    Compressor compressor;
    std::string output = compressor.decompress(input);
    if (output == expectedOutput) {
        std::cout << "Test passed!" << std::endl;
    }
    else {
        std::cout << "Test failed!" << std::endl;
    }
}

int main(int argc, char *argv[]) {
    const std::string expectedOutputTest1 = "aaabbcc";
    const std::string expectedOutputTest2 = "abcd";
    const std::string expectedOutputTest3 = "";
    const std::string expectedOutputTest4 = "111118888888444";

    Compressor compressor;

    testDecompress("a3b2c2", expectedOutputTest1);
    testDecompress("abcd", expectedOutputTest2);
    testDecompress("", expectedOutputTest3);
    testDecompress("158743", expectedOutputTest4);

}

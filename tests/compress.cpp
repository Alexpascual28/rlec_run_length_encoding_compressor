#include "file_compression_system.h"
#include <iostream>

void testCompress(const std::string& input, const std::string& expectedOutput) {
    Compressor compressor;
    std::string output = compressor.compress(input);
    if (output == expectedOutput) {
        std::cout << "Test passed!" << std::endl;
    }
    else {
        std::cout << "Test failed!" << std::endl;
    }
}

int main(int argc, char *argv[]) {
    const std::string expectedOutputTest1 = "a3b2c2";
    const std::string expectedOutputTest2 = "abcd";
    const std::string expectedOutputTest3 = "";
    const std::string expectedOutputTest4 = "158743";

    Compressor compressor;

    testCompress("aaabbcc", expectedOutputTest1);
    testCompress("abcd", expectedOutputTest2);
    testCompress("", expectedOutputTest3);
    testCompress("111118888888444", expectedOutputTest4);

}

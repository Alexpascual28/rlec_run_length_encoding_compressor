#include "file_compression_system.h"
#include <iostream>

void testDecompress(int testNumber, const std::string& input, const std::string& expectedOutput) {
    std::cout << "Test " << testNumber << std::endl;

    std::cout << "Testing decompression of: " << input << std::endl;
    std::cout << "Expected output: " << expectedOutput << std::endl;

    Compressor compressor;
    std::string output = compressor.decompress(input);
    std::cout << "Actual output: " << output << std::endl;

    if (output == expectedOutput) {
        std::cout << "Test passed!\n" << std::endl;
    }
    else {
        std::cout << "Test failed!\n" << std::endl;
    }
}

int main(int argc, char *argv[]) {
    const std::string expectedOutputTest1 = "aaabbcc";
    const std::string expectedOutputTest2 = "abcd";
    const std::string expectedOutputTest3 = "";
    const std::string expectedOutputTest4 = "111118888888444";
    const std::string expectedOutputTest5 = "&&&&&&&&@@@@@@@@@$%%%";

    Compressor compressor;

    testDecompress(1, "a3b2c2", expectedOutputTest1);
    testDecompress(2, "abcd", expectedOutputTest2);
    testDecompress(3, "", expectedOutputTest3);
    testDecompress(4, "158743", expectedOutputTest4);
    testDecompress(5, "&8@9$%3", expectedOutputTest5);

}

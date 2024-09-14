#include "file_compression_system.h"
#include <iostream>

void testCompress(int testNumber, const std::string& input, const std::string& expectedOutput) {
    std::cout << "Test " << testNumber << std::endl;

    std::cout << "Testing compression of: " << input << std::endl;
    std::cout << "Expected output: " << expectedOutput << std::endl;

    Compressor compressor;
    std::string output = compressor.compress(input);
    std::cout << "Actual output: " << output << std::endl;

    if (output == expectedOutput) {
        std::cout << "Test passed!\n" << std::endl;
    }
    else {
        std::cout << "Test failed!\n" << std::endl;
    }
}

int main(int argc, char *argv[]) {
    const std::string expectedOutputTest1 = "a3b2c2";
    const std::string expectedOutputTest2 = "abcd";
    const std::string expectedOutputTest3 = "";
    const std::string expectedOutputTest4 = "158743";
    const std::string expectedOutputTest5 = "&8@9$%3";

    Compressor compressor;

    testCompress(1, "aaabbcc", expectedOutputTest1);
    testCompress(2, "abcd", expectedOutputTest2);
    testCompress(3, "", expectedOutputTest3);
    testCompress(4, "111118888888444", expectedOutputTest4);
    testCompress(5, "&&&&&&&&@@@@@@@@@$%%%", expectedOutputTest5);

}

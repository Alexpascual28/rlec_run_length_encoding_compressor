#include "file_compression_system.h"
#include <iostream>

/**
 * @brief Executes a test case for the compress function of the Compressor class.
 *        It compares the output of the compress function with the expected output and prints the result in the console.
 * 
 * @param testNumber test case number, displayed in the console
 * @param input string to compress
 * @param expectedOutput expected compressed string result
 */
void testCompress(int testNumber, const std::string& input, const std::string& expectedOutput) {
    // Display information about the test
    std::cout << "Test " << testNumber << std::endl;
    std::cout << "Testing compression of: " << input << std::endl;
    std::cout << "Expected output: " << expectedOutput << std::endl;

    Compressor compressor; // Create an instance of the Compressor class
    std::string output = compressor.compress(input); // Compress the input string
    std::cout << "Actual output: " << output << std::endl; // Display the actual output

    // Compare the actual output with the expected output
    if (output == expectedOutput) {
        std::cout << "Test passed!\n" << std::endl;
    }
    else {
        std::cout << "Test failed!\n" << std::endl;
    }
}

/**
 * @brief Main function. It tests the compress function of the Compressor class by comparing the output of the compress function
 *        with the expected output for different test cases.
 * 
 * @param argc number of passed arguments (unused)
 * @param argv list of arguments (unused)
 * @return int 
 */
int main(int argc, char *argv[]) {
    // Define the expected output for each test case
    const std::string expectedOutputTest1 = "a3b2c2";
    const std::string expectedOutputTest2 = "abcd";
    const std::string expectedOutputTest3 = "";
    const std::string expectedOutputTest4 = "158743";
    const std::string expectedOutputTest5 = "&8@9$%3";

    // Execute the test cases
    testCompress(1, "aaabbcc", expectedOutputTest1);
    testCompress(2, "abcd", expectedOutputTest2);
    testCompress(3, "", expectedOutputTest3);
    testCompress(4, "111118888888444", expectedOutputTest4);
    testCompress(5, "&&&&&&&&@@@@@@@@@$%%%", expectedOutputTest5);
}

#include "file_compression_system.h"
#include <iostream>
#include <string>

// CONSTRUCTOR
Compressor::Compressor() {}

// Returns the compressed version of the input string using the Run-Length Encoding algorithm
std::string Compressor::compress(const std::string& input) {
    std::string output = "";

    int length = input.size(); // Get the length of the input string

    // Iterate through the input string
    for(int i = 0; i < length; i++) {
        int count = 1;
        
        // If the current character is the same as the next character, increment the count
        while(i < length - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // After counting the characters that are the same
        // If the count is 1, add the character to the output string
        if(count == 1) {
            output += input[i];
        }

        // If the count is greater than 1, add the character and the count to the output string
        else {
            output += input[i] + std::to_string(count);
        }
    }

    return output;
}

// Returns the decompressed version of the input string using the Run-Length Encoding algorithm
std::string Compressor::decompress(const std::string& input) {
    std::string output = "";

    int length = input.size();

    for(int i = 0; i < length; i++) {

        // If the character is not a digit, add it to the output string
        if(!isdigit(input[i + 1])) {
            output += input[i];
            continue;
        }
        else{
            int charCount = input[i + 1] - 48;

            // std::cout << charCount << std::endl;

            // If the character count is 1 or 0, add the character to the output string
            if(charCount == 1 || charCount == 0) {
                output += input[i];
                continue;
            }

            // If the character count is greater than 1, add the character to the output string the number of times specified by the count
            else {
                for(int j = 0; j < charCount; j++) {
                    output += input[i];
                }

                i++;
            }
            
            
        }
    }

    return output;
}
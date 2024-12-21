// program name goes here
// your name goes here
// any example usage or helpful command line arguments go here

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main() {
    std::string filename = "Constitution.txt";  // Specify the file name directly
    std::ifstream file(filename);

    // Check if the file opened successfully
    if (!file) {
        std::cerr << "Error: Could not open file " << filename << ". Please check the file path.\n";
        return 1;
    }

    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
    char ch;

    std::cout << "Contents of " << filename << ":\n\n";

    // Read the file character by character
    while (file >> std::noskipws >> ch) {
        std::cout << ch;  // Display each character

        // Convert to lowercase for consistent vowel counting
        ch = std::tolower(ch);

        // Count each vowel
        switch (ch) {
        case 'a': ++aCount; break;
        case 'e': ++eCount; break;
        case 'i': ++iCount; break;
        case 'o': ++oCount; break;
        case 'u': ++uCount; break;
        }
    }

    // Close the file
    file.close();

    // Display vowel counts
    std::cout << "\n\nVowel Counts:\n";
    std::cout << "The number of A's: " << aCount << "\n";
    std::cout << "The number of E's:  " << eCount << "\n";
    std::cout << "The number of I's: " << iCount << "\n";
    std::cout << "The number of 0's: " << oCount << "\n";
    std::cout << "The number of U's: " << uCount << "\n";

    int totalVowels = aCount + eCount + iCount + oCount + uCount;
    std::cout << "The vowel count is: " << totalVowels << "\n";

    return 0;
}

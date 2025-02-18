#include <iostream>
#include <string>

int main() {
    // Example input
    std::string s = "Hello, this is a sample string!";
    std::string t = "";

    // Starting position k and length n of the slice
    int k = 7;   // Starting from 7th character
    int n = 4;   // Slice 4 characters from position k

    // Slice the string and append it to t
    std::string slicedPart = s.substr(k, n);
    t += slicedPart;

    // Delete the appended portion from s
    s.erase(k, n);

    // Display the results
    std::cout << "Sliced portion: " << slicedPart << std::endl;
    std::cout << "Updated string s: " << s << std::endl;
    std::cout << "Updated string t: " << t << std::endl;

    return 0;
}

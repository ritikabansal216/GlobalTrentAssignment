#include <iostream>
#include <string>

bool isAlphabetic(const std::string& s) {
    for (char c : s) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string testString1 = "HelloWorld";
    std::string testString2 = "Hello123";
    std::string testString3 = " ";

    std::cout << "Test String 1: " << testString1 << " - " << (isAlphabetic(testString1) ? "True" : "False") << std::endl;
    std::cout << "Test String 2: " << testString2 << " - " << (isAlphabetic(testString2) ? "True" : "False") << std::endl;
    std::cout << "Test String 3: " << testString3 << " - " << (isAlphabetic(testString3) ? "True" : "False") << std::endl;

    return 0;
}

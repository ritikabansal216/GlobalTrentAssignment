#include <iostream>
#include <unordered_map>
#include <algorithm>

int lengthOfLongestSubstring(const std::string& s) {
    std::unordered_map<char, int> charIndexMap;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.length(); ++end) {
        char currentChar = s[end];

        if (charIndexMap.find(currentChar) != charIndexMap.end()) {
            start = std::max(start, charIndexMap[currentChar] + 1);
        }

        charIndexMap[currentChar] = end;
        maxLength = std::max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    std::string s = "abcabcbb";
    std::cout << "The length of the longest substring without repeating characters is: " << lengthOfLongestSubstring(s) << std::endl;

    return 0;
}

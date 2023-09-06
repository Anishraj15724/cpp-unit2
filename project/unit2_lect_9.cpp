#include <iostream>
#include <cctype>
#include <string>

int count_vowels(const std::string& sentence) {
    int count = 0;
    for (auto p = sentence.begin(); p != sentence.end(); ++p) {
        char c = std::tolower(*p);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << count_vowels(sentence) << std::endl;
    return 0;
}

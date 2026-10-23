#include <iostream>
#include <string> 
#include <algorithm>
#include <cctype>

// проверяем является ли строка палиндромом
bool isPalindrome(const std::string& text) {
    // очистка: только буквы и цифры, нижний регистр
    std::string cleaned;
    for (char c : text) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
        }
    }

    // сравнение с реверсом
    std::string reversed = cleaned;
    std::reverse(reversed.begin(), reversed.end());
    return cleaned == reversed;
}
int main() {
    std::string tests[] = {
        "А роза упала на лапу Азора",
        "Madam, I'm Adam",
        "Hello, World!",
        "12321"
        "racecar"
    };

    // проверяем каждую строку и выводим результат
    for (const auto& text : tests) {
        std::cout << "'" << text << "' - "
                << (isPalindrome(text) ? "палиндром" : "не палиндром")
                << "\n";
    }
    return 0;
}
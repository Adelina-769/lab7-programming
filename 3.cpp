#include <iostream>
#include <string>

// функция шифрует или расшифровывает строку
std::string caesarCipher(const std::string& text, int shift) {
    std::string result = text;
    
    // перебираем каждый символ строки 
    for (char& c : result) {
        // проверяем, является ли символ английской буквой
        if (std::isalpha(static_cast<unsigned char>(c))) {
            char base = std::isupper(static_cast<unsigned char>(c)) ? 'A' : 'a'; // выбираем начало алфавита "А" или "а"
            c = (c - base + shift % 26 + 26) % 26 + base; // сдвигаем букву
        }

    }
    return result; // возвращаем полученную строку
}

int main() {
    std::string original = "Hello, World!";

    // шифруем текст со сдвигом на 3 позиции
    std::string encrypted = caesarCipher(original, 3);

    // расшифровываем текст
    std::string decrypted = caesarCipher(encrypted, -3);

    // выводим исходный, зашифрованный и расшифрованный тексты
    std::cout << "Оригинал: " << original << "\n";
    std::cout << "Зашифровано: " << encrypted << "\n"; 
    std::cout << "Расшифровано: " << decrypted << "\n";

    return 0;
}

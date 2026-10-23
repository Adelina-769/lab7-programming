#include <iostream>
#include <string>
#include <sstream>

// функция подсчитывает количество слов в строке
int countWords(const std::string& text) {
    std::istringstream iss(text);
    std::string word;
    int count = 0; // заводим счетчик слов
    
    // читаем слова по одному, пока они есть 
    while (iss >> word) { 
        ++count; // увеличиваем счетчик на единицу
    }
    return count; // возвращаем количество слов
}

int main() {
    std::string text;

    // просим пользователя ввести строку
    std::cout << "Введите текст: ";
    std::getline(std::cin, text);

    // вывдим количество найденных слов
    std::cout << "Количество слов: " << countWords(text) << "\n";
    return 0;

}
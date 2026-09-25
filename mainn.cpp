#include <iostream>
#include <windows.h>

// Функция square с использованием auto (современный синтаксис C++)
auto square(int x) -> int {
    return x * x;
}

int main() {
    // Исправление кодировки для вывода русского текста
    SetConsoleOutputCP(65001);
    
    int number = 7;
    // auto автоматически определяет тип переменной result как int
    auto result = square(number);
    
    std::cout << "Число: " << number << std::endl;
    std::cout << "Квадрат: " << result << std::endl;
    
    return 0;
}
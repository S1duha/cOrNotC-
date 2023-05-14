#include <iostream>
template <int N>
void printNumbers() {
    for (int i = 0; i < N; i++) {
        std::cout << i << " ";
    }
}

int main() {
    printNumbers<5>(); // Разрешено: значение N известно на этапе компиляции
    int n;
    std::cin >> n;
    printNumbers<n>(); // Ошибка компиляции: значение n не известно на этапе компиляции
    return 0;
}

\
    // ЛР02. Частина В. Варіант 13
    // Олійник Святослав, 21КІ, 2026-11-03
    #include <iostream>

    int main() {
        int number = 0;
        std::cout << "Enter a two-digit positive integer: ";
        std::cin >> number;

        const int tens = number / 10;
        const int units = number % 10;
        const int reversed = units * 10 + tens;
        const int sum = number + reversed;

        std::cout << "Reversed number = " << reversed << '\\n';
        std::cout << "Sum = " << sum << '\\n';
        return 0;
    }

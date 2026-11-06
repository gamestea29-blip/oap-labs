\
    // ЛР02. Частина Б. Пошук помилок
    // Олійник Святослав, 21КІ, варіант 13
    #include <iostream>

    int square(int n);

    int main() {
        int first = 0;
        int second = 0;
        std::cout << "Enter two integers: ";
        std::cin >> first >> second;

        int sum = first + second;
        std::cout << "Sum = " << sum << '\\n';
        std::cout << "Square of sum = " << square(sum) << '\\n';
        std::cout << "Average = " << static_cast<double>(sum) / 2 << '\\n';
        return 0;
    }

    int square(int n) {
        return n * n;
    }

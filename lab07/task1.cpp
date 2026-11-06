#include <iomanip>
#include <iostream>

int main() {
    const int kA = 3;
    const int kB = 2;
    const int kC = 0;

    int n;
    if (!(std::cin >> n) || n < 1 || n > 20) {
        std::cout << "Error\n";
        return 1;
    }

    double result = 0.0;

    for (int i = 1; i <= n; ++i) {
        const double term = static_cast<double>(kA * i + kB) / (i + kC);
        result += term;
    }

    std::cout << std::fixed << std::setprecision(6) << result << '\n';
    return 0;
}

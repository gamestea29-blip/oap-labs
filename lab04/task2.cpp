#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x;

    constexpr double a = -2.0;
    constexpr double b = 1.0;
    constexpr double EPS = 1e-9;

    std::cout << "Variant 13. Enter x: ";
    if (!(std::cin >> x)) {
        std::cerr << "Error: invalid input.\n";
        return 1;
    }

    double y = 0.0;
    int branch = 0;

    if (x < a) {
        branch = 1;
        // f1(x) = 1 / (x + 1)
        if (std::fabs(x + 1.0) < EPS) {
            std::cerr << "Error: division by zero in branch 1 (x = -1).\n";
            return 1;
        }
        y = 1.0 / (x + 1.0);
    } else if (x <= b) {
        branch = 2;
        // f2(x) = e^(x^2)
        y = std::exp(x * x);
    } else {
        branch = 3;
        // f3(x) = sqrt(x^2 - 4)
        const double radicand = x * x - 4.0;
        if (radicand < -EPS) {
            std::cerr << "Error: square root of a negative number in branch 3.\n";
            return 1;
        }
        y = std::sqrt(radicand < 0.0 ? 0.0 : radicand);
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "x = " << x << '\n';
    std::cout << "Branch = " << branch << '\n';
    std::cout << "y = " << y << '\n';

    return 0;
}

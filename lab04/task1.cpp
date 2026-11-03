#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c;

    std::cout << "Enter a, b, c: ";
    if (!(std::cin >> a >> b >> c)) {
        std::cerr << "Error: invalid input.\n";
        return 1;
    }

    constexpr double EPS = 1e-9;
    std::cout << std::fixed << std::setprecision(4);

    if (std::fabs(a) < EPS) {
        if (std::fabs(b) < EPS) {
            if (std::fabs(c) < EPS) {
                std::cout << "Infinite number of solutions (any x).\n";
            } else {
                std::cout << "No roots.\n";
            }
        } else {
            const double x = -c / b;
            std::cout << "Linear equation: x = " << x << '\n';
        }
    } else {
        const double d = b * b - 4.0 * a * c;

        if (d < -EPS) {
            std::cout << "No real roots.\n";
        } else if (std::fabs(d) < EPS) {
            const double x = -b / (2.0 * a);
            std::cout << "One root: x = " << x << '\n';
        } else {
            const double sqrtD = std::sqrt(d);
            const double x1 = (-b - sqrtD) / (2.0 * a);
            const double x2 = (-b + sqrtD) / (2.0 * a);
            std::cout << "Two roots: x1 = " << x1
                      << ", x2 = " << x2 << '\n';
        }
    }

    return 0;
}

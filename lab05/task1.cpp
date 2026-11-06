#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    const double a = -2.0;
    const double b = 2.0;
    const double h = 0.5;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "i\tx\ty\n";

    for (int i = 0; i <= 8; ++i) {
        const double x = a + i * h;
        const double argument = 2.0 - x;

        std::cout << i << '\t' << x << '\t';

        if (argument <= 0.0) {
            std::cout << "undefined\n";
        } else {
            const double y = std::log(argument) + x * x;
            std::cout << y << '\n';
        }
    }

    return 0;
}

#include <iomanip>
#include <iostream>

int main() {
    const double start = -1.0;
    const double step = 0.5;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "x\\y";
    for (int j = 0; j <= 4; ++j) {
        const double y = start + j * step;
        std::cout << '\t' << y;
    }
    std::cout << '\n';

    for (int i = 0; i <= 4; ++i) {
        const double x = start + i * step;
        std::cout << x;

        for (int j = 0; j <= 4; ++j) {
            const double y = start + j * step;
            const double denominator = x + y + 1.0;

            std::cout << '\t';
            if (denominator == 0.0) {
                std::cout << "undefined";
            } else {
                const double z = (x * x + 1.0) / denominator;
                std::cout << z;
            }
        }
        std::cout << '\n';
    }

    return 0;
}

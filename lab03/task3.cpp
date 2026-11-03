#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    const double arithmeticMean = (a + b + c) / 3.0;
    const double geometricMean = std::cbrt(a * b * c);
    const double harmonicMean = 3.0 / (1.0 / a + 1.0 / b + 1.0 / c);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "\nArithmetic mean = " << arithmeticMean << '\n';
    std::cout << "Geometric mean  = " << geometricMean << '\n';
    std::cout << "Harmonic mean   = " << harmonicMean << '\n';

    return 0;
}

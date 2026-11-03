#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double x, y, z;

    std::cout << "Enter x, y, z: ";
    std::cin >> x >> y >> z;

    // Variant 13: s = cbrt(x^2 + y^2) + tan(z / 2)
    const double sumOfSquares = x * x + y * y;
    const double cubeRootPart = std::cbrt(sumOfSquares);
    const double tangentPart = std::tan(z / 2.0);
    const double s = cubeRootPart + tangentPart;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "\nInput values:\n";
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "s = " << s << '\n';

    return 0;
}

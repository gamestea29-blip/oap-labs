#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter three sides of the triangle: ";
    std::cin >> a >> b >> c;

    const double p = (a + b + c) / 2.0;
    const double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
    const double r = area / p;
    const double R = (a * b * c) / (4.0 * area);
    const double h = (2.0 * area) / a;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTriangle characteristics:\n";
    std::cout << "--------------------------------\n";
    std::cout << std::left << std::setw(24) << "Semiperimeter p"
              << p << '\n';
    std::cout << std::left << std::setw(24) << "Area S"
              << area << '\n';
    std::cout << std::left << std::setw(24) << "Inscribed radius r"
              << r << '\n';
    std::cout << std::left << std::setw(24) << "Circumscribed radius R"
              << R << '\n';
    std::cout << std::left << std::setw(24) << "Height to side a"
              << h << '\n';

    return 0;
}

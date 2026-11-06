#include <iostream>

int main() {
    const int L = -15;
    const int H = 15;

    int n;
    if (!(std::cin >> n) || n < 1 || n > 30) {
        std::cout << "Error\n";
        return 1;
    }

    int below = 0;
    int inside = 0;
    int above = 0;

    for (int i = 0; i < n; ++i) {
        int t;
        if (!(std::cin >> t) || t < -100 || t > 100) {
            std::cout << "Error\n";
            return 1;
        }

        if (t < L) {
            ++below;
        } else if (t <= H) {
            ++inside;
        } else {
            ++above;
        }
    }

    std::cout << "below / inside / above = "
              << below << " / " << inside << " / " << above << '\n';

    return 0;
}

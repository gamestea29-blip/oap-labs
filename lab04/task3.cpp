#include <iostream>
#include <iomanip>

int main() {
    int tariffCode;
    int minutes;
    double gb;

    std::cout << "Enter tariff code (1-4), minutes and GB: ";
    if (!(std::cin >> tariffCode >> minutes >> gb)) {
        std::cerr << "Error: invalid input.\n";
        return 1;
    }

    if (minutes < 0 || minutes > 10000 || gb < 0.0 || gb > 10000.0) {
        std::cerr << "Error: minutes and GB must be in [0, 10000].\n";
        return 1;
    }

    double monthlyFee = 0.0;
    int includedMinutes = 0;
    double includedGb = 0.0;

    switch (tariffCode) {
        case 1:
            monthlyFee = 100.0;
            includedMinutes = 100;
            includedGb = 5.0;
            break;
        case 2:
            monthlyFee = 200.0;
            includedMinutes = 300;
            includedGb = 10.0;
            break;
        case 3:
            monthlyFee = 300.0;
            includedMinutes = 500;
            includedGb = 20.0;
            break;
        case 4:
            monthlyFee = 400.0;
            includedMinutes = 1000;
            includedGb = 40.0;
            break;
        default:
            std::cerr << "Error: incorrect tariff code.\n";
            return 1;
    }

    const int extraMinutes = minutes > includedMinutes
        ? minutes - includedMinutes : 0;
    const double extraGb = gb > includedGb ? gb - includedGb : 0.0;
    const double total = monthlyFee + extraMinutes + extraGb * 20.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total: " << total << " UAH\n";
    return 0;
}

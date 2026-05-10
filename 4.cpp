#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "inf";
            } else {
                std::cout << "no";
            }
        } else {
            double x = -c / b;
            std::cout << x;
        }
        return 0;
    }

    double d = b * b - 4 * a * c;

    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << x1 << " " << x2;
    } else if (d == 0) {
        double x = -b / (2 * a);
        std::cout << x;
    } else {
        std::cout << "no";
    }

    return 0;
}
#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    if (n < 0) n = -n;

    long long sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    std::cout << sum;

    return 0;
}
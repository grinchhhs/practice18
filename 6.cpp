#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) n = -n;

        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    std::cout << count;

    return 0;
}
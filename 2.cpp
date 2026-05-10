#include <iostream>
using namespace std;

int main() {
    double celsius;

    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;
    double kelvin = celsius + 273.15;

    cout << fahrenheit << endl;
    cout << kelvin;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        digit = number % 10;   // last digit nikala
        sum = sum + digit;     // sum me add kiya
        number = number / 10;  // last digit hata diya
    }

    cout << "Sum of digits = " << sum;

    return 0;
}

#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    long long binary;  // input binary number
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0, i = 0, rem;

    // Conversion logic
    while (binary != 0) {
        rem = binary % 10;              // get last digit
        decimal += rem * pow(2, i);     // multiply by power of 2
        binary /= 10;                   // remove last digit
        i++;
    }

    cout << "Decimal equivalent = " << decimal << endl;
    return 0;
}

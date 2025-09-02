#include <iostream>
using namespace std;

int main() {
    int originalNumber,
    reversedNumber = 0, 
    lastDigit;

    cout << "Enter a number: ";
    cin >> originalNumber;

    while (originalNumber != 0) {
        lastDigit = originalNumber % 10;                 // extract last digit
        reversedNumber = reversedNumber * 10 + lastDigit; // build reversed number
        originalNumber = originalNumber / 10;             // remove last digit
    }

    cout << "Reversed Number: " << reversedNumber;

    return 0;
}

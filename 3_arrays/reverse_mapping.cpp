#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 6-digit number (digits 1-9 only): ";
    cin >> num;

    int reverseDigits[10] = {0};  // For digits 1-9
    int count = 1;

    while (num != 0) {
        int rem = num % 10;

        // Only if rem is between 1 to 9
        if (rem >= 1 && rem <= 9) {
            reverseDigits[rem] = count;
        }

        count++;
        num /= 10;
    }

    // Construct final number
    int reverse = 0;
    for (int i = 9; i >= 1; --i) {
        reverse = reverse * 10 + reverseDigits[i];
    }

    cout << "The number formed: " << reverse << endl;
    return 0;
}
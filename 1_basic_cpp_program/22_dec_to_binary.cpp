#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int binary[32];  // to store binary digits
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;  // remainder will be 0 or 1
        num = num / 2;
        i++;
    }

    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}

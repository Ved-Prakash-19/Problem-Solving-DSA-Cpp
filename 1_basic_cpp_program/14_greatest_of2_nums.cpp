#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first numbers: ";
    cin >> num1;

    cout << "Enter second numbers: ";
    cin >> num2;

    if (num1 > num2)
        cout << "Greatest number is: " << num1;
    else if (num2 > num1)
        cout << "Greatest number is: " << num2;
    else
        cout << "Both numbers are equal.";

    return 0;
}

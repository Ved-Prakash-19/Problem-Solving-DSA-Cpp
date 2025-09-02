#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first numbers: ";
    cin >> num1;

    cout << "Enter second numbers: ";
    cin >> num2;

    cout << "Enter third numbers: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
        cout << "Greatest number is: " << num1;
    else if (num2 >= num1 && num2 >= num3)
        cout << "Greatest number is: " << num2;
    else
        cout << "Greatest number is: " << num3;

    return 0;
}

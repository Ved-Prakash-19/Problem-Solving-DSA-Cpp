#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;
    }

    cout << "GCD (HCF) = " << a << endl;

    return 0;
}

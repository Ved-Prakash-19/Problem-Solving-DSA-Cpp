#include <iostream>
using namespace std;

// Function to swap
void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    swapNumbers(a, b);

    cout << "After Swap: a = " << a << ", b = " << b << endl;

    return 0;
}

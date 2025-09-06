#include <iostream>
using namespace std;

// Function definition
int add(int x, int y) {
    return x + y;  // return sum
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Function call
    int result = add(a, b);

    cout << "Sum = " << result << endl;
    return 0;
}

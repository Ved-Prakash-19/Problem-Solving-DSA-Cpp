#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, r, temp;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;   // original number ko save kiya

    while(n > 0) {
        r = n % 10;         // last digit
        sum = sum + (r * r * r); // cube add kiya
        n = n / 10;         // last digit remove
    }

    if(temp == sum)
        cout << "Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, r, temp;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;   // original number ko save kar liya

    while(n > 0) {
        r = n % 10;         // last digit nikali
        rev = rev * 10 + r; // reverse banta gaya
        n = n / 10;         // last digit hata di
    }

    if(temp == rev)
        cout << "Palindrome number" << endl;
    else
        cout << "Not a palindrome number" << endl;

    return 0;
}

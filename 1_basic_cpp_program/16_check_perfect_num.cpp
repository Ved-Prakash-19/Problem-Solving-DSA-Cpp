#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is NOT a Perfect Number." << endl;
        return 0;
    }

    int sum = 1; // 1 is always a divisor
    int sq = sqrt(num);

    for (int i = 2; i <= sq; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i)  // avoid adding sqrt twice
                sum += num / i;
        }
    }

    if (sum == num)
        cout << num << " is a Perfect Number." << endl;
    else
        cout << num << " is NOT a Perfect Number." << endl;

    return 0;
}








// #include <iostream>
// using namespace std;

// int main() {
//     int num, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     // find sum of divisors
//     for (int i = 1; i <= num / 2; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }

//     // check condition
//     if (sum == num && num != 0) {
//         cout << num << " is a Perfect Number." << endl;
//     } else {
//         cout << num << " is NOT a Perfect Number." << endl;
//     }

//     return 0;
// }







#include <iostream>
using namespace std;

// using functions:-

void printpattern(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = min(min(top, bottom), min(left, right));
            cout << (n - layer) << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cout << "\nEnter value of n: ";
        cin >> n;
        printpattern(n);
    }

    return 0;
}





// Without Using functions:-

#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cout << "\nEnter value of n: ";
        cin >> n;

        int size = 2 * n - 1;   //it means find row and col size

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int top = i;
                int left = j;
                int bottom = size - 1 - i;
                int right = size - 1 - j;

                int layer = min(min(top, bottom), min(left, right));
                cout << (n - layer) << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
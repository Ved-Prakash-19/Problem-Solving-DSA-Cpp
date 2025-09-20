#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

        // above part:-
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }
        for (int j = 0; j < 2 * i + 1; j++){
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // below part:-
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++){
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}
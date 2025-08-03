#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    vector<pair<int, int>> numIndex;
    for (int i = 0; i < n; ++i) {
        numIndex.push_back({nums[i], i});
    }

    sort(numIndex.begin(), numIndex.end());

    int left = 0;
    int right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = numIndex[left].first + numIndex[right].first;
        if (sum == target) {
            cout << "Indices of elements that sum to target: ";
            cout << numIndex[left].second << " " << numIndex[right].second << endl;
            found = true;
            break;
        } else if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }

    if (!found) {
        cout << "No two elements found whose sum is equal to the target.\n";
    }

    return 0;
}

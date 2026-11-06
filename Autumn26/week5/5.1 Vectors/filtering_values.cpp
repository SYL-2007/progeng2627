#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;

    int n, number, t;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> number;
        nums.push_back(number);
    }

    cout << "Enter the threshold value: ";
    cin >> t;
    for (int i = 0; i < n; i++) {
        if (nums[i] < t) {
            cout << nums[i] << " ";
        }
    }

}
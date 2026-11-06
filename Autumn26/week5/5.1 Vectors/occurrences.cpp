#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    vector<int> indices;

    int n, value, s, count = 0;
    cout << "please enter n: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "please enter a number: " << endl;
        cin >> value;
        nums.push_back(value);
    }
    cout << "please enter s: " << endl;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (nums[i] == s) {
            count++;
            indices.push_back(i);
        }
    }
    cout << "there are " << count << " occurrences of " << s << endl;
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << endl;
    }
}
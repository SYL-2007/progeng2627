#include <iostream>

using namespace std;

int main() {
    int n, curMax, curMin;

    cout << "Please enter a number: " << endl;
    cin >> n;

    curMax = n;
    curMin = n;

    cout << "Maximum so far : " << curMax << endl;
    cout << "Minimum so far : " << curMin << endl;

    while (n != 0) {
        cout << "Please enter a number: " << endl;
        cin >> n;

        if (n > curMax) {
            curMax = n;
        } else if (n < curMin) {
            curMin = n;
        }

        cout << "Maximum so far : " << curMax << endl;
        cout << "Minimum so far : " << curMin << endl;
    }
}
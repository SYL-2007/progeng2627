#include <iostream>

using namespace std;

int main() {
    // Sequence
    int n, step = 0, maxNum = 0;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n /2;
        } else {
            n = 3 * n + 1;
        }
        cout << n << " ";
        step++;
        if (n > maxNum) {
            maxNum = n;
        }
    }
    cout << endl;
    cout << "Total steps: " << step << endl;
    cout << "Maximum number: " << maxNum << endl;
}
#include <iostream>

using namespace std;

int main() {
    // Excercise 1
    for(int i = 0; i < 7; i++) {
        cout << i << endl;
    }
    // the above would output 0 through to 6.
    
    // Exercise 2 representing x^n
    double x, n;
    cin >> x >> n;

    for (double i = 0; i < n; i++) {
        x *= x;
    }
    cout << x << endl;

    // Exercise 3 factorials
    int num;
    double ans = 1;
    cin >> num;

    for (int i = num; i > 0; i--) {
        ans *= i;
    }
    cout << ans << endl;
}
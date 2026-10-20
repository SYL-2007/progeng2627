#include <iostream>

using namespace std;

int main() {
    // Exercise 1
    int n;
    cin >> n;

    int count1 = 0, count2 = 0;
    while (count1 < n) {
        count2 = 0;
        while (count2 < n) {
            cout << "*";
            count2++;
        }
        cout << endl;
        count1++;
    }

    // Exercise 2
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
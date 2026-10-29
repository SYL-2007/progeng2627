#include <iostream>

 using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n/2+1; i ++) {
        if (n % i == 0) return false;
    } 
    return true;
}

 int main() {
    int n, m;

    cin >> n >> m;

    for (int i = n; i <= m; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
 }
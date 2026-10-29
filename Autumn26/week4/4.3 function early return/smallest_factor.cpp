#include <iostream>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n/2+1; i ++) {
        if (n % i == 0) return false;
    } 
    return true;
}

int smallestFactor(int n) {
    for (int i = 2; i < n/2+1; i ++) {
        if (isPrime(i) && n % i == 0) return i;
    }
    return 0;
}

int main() {
    int n = 0;

    n = 6;
    cout << (smallestFactor(n) == 2) << endl;
    // cout << smallestFactor(n) << endl;
    
    n = 25;
    cout << (smallestFactor(n) == 5) << endl;
    // cout << smallestFactor(n) << endl;

    n = 391;
    cout << (smallestFactor(n) == 17) << endl;
    // cout << smallestFactor(n) << endl;
}
#include <iostream>

using namespace std;

double myPow(double base, int exp); 

int main() {
    // Excercise 1 & 2: simplified version of pow
    cout << "2^3: " << myPow(2, 3) << endl;
    cout << "0.5^2: " << myPow(0.5, 2) << endl;
    cout << "1^0: " << myPow(1, 0) << endl;
    cout << "2^-2: " << myPow(2, -2) << endl;

    // Excercise 3: updated sum of powers
    int n; double x, sum = 0.0;
    cout << "Enter a number x: ";
    cin >> x;
    cout << "Enter the index n: ";
    cin >> n;

    for (int i = 0; i <= n; ++i) {
        sum += myPow(x, i);
    }
    cout << "The sum of powers from 0 to " << n << " is: " << sum << endl;
}

double myPow(double base, int exp) {
    double result = 1.0;
    if (exp < 0) {
        for (int i = 0; i < -exp; ++i) {
            result /= base; 
        }
    } else {
        for (int i = 0; i < exp; ++i) {
            result *= base; 
        }
    }
    
    return result;
}
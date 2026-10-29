#include <iostream>

using namespace std;

int maxOfTwo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int maxOfThree(int a, int b, int c) {
    return maxOfTwo(maxOfTwo(a, b), c);
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

double sumOfPowers(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i <= n; ++i) {
        sum += myPow(x, i);
    }
    return sum;
}

int main() {
    // Max of two num
    cout << (maxOfTwo(10, 30) == 30) << endl; // true
    cout << (maxOfTwo(10, 10) == 10) << endl; // true

    // Max of three num
    cout << (maxOfThree(10, 30, 20) == 30) << endl; // true
    cout << (maxOfThree(10, 10, 10) == 10) << endl; // true

    // sum of powers
    cout << (sumOfPowers(2, 3) == 15) << endl; // true
    cout << (sumOfPowers(0.5, 2) == 1.75) << endl; // true

}
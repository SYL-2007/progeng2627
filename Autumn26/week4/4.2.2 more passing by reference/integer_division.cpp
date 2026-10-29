#include <iostream>

using namespace std;

void intDivision(int a, int b, int& quotient, int& remainder) {
    quotient = a / b;
    remainder = a % b;
}

int main() {
    int a, b, q, r;
    a = 100;
    b = 30;
    intDivision(a, b, q, r);
    cout << (q == 3 && r == 10) << endl;

    return 0;
}
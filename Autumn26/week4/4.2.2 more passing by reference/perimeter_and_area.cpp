#include <iostream>

using namespace std;

void P_n_A(double length, double width, double& perimeter, double& area) {
    perimeter = 2 * (length + width);
    area = length * width;
}

int main() {
    double length, width, P, A;
    
    length = 5.0;
    width = 3.0;
    P_n_A(length, width, P, A);
    cout << (A == 15.0 && P == 16.0) << endl; // true
}
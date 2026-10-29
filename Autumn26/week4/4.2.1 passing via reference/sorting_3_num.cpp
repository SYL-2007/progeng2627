#include <iostream>

using namespace std;

void myswap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    // complete this function
    // so that the output is as in the examples below

    // use function myswap within this function
    // (remember to change the type of the parameters to double)

    if (s1 > s2) {
        myswap(s1, s2);
    }
    if (s2 > s3) {
        myswap(s2, s3);
    }
    if (s1 > s2) {
        myswap(s1, s2);
    }
}

int main() {
    double n1 = 3, n2 = 1, n3 = 2;
    sort_three_numbers(n1, n2, n3);
    cout << (n1 == 1 && n2 == 2 && n3 == 3) << endl; // true

    n1 = 4.5; n2 = 9.7; n3 = 0.2;
    sort_three_numbers(n1, n2, n3);
    cout << (n1 == 0.2 && n2 == 4.5 && n3 == 9.7) << endl; // true
}
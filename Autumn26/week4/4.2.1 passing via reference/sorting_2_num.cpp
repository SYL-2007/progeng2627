#include <iostream>

using namespace std;

void myswap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

void sort_two_numbers(double& s1, double& s2){
    // complete this function
    // so that the output is as in the examples below

    // use function myswap within this function
    // (remember to change the type of the parameters to double)

    if (s1 > s2) {
        myswap(s1, s2);
    }
}

int main() {
    double n1, n2;
    cout << "please enter two numbers:" << endl;
    cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    cout << n1 << " " << n2 << endl;
}
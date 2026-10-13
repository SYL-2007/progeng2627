#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter a number: " << endl;
    cin >> num;

    if (num % 3 == 0) {
        cout << "The number is a multiple of 3" << endl;
    } else {
        cout << "The number is not a multiple of 3" << endl;
    }

    double n, absv;
    // n for the input, absv will be
    // the absolute value we compute

    // TODO: ask for a number in input
    // TODO: read the input number in n
    cout << "Please enter a number: " << endl;
    cin >> n;

    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        // if not, its absolute value is the same as n
        // TODO: assign the value of n to absv
        absv = n;
    }

    cout << "|" << n << "| = " << absv << endl;
}
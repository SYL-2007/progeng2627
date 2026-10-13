#include <iostream>
using namespace std;

int main() {
    //Excercise 1
    double n1, n2, product;
    cout << "Please enter the first number" << endl;
    cin >> n1;

    cout << "Please enter the second number" << endl;
    cin >> n2;

    product = n1 * n2;
    cout << n1 << " * " << n2 << " = " << product << endl;

    //Excercise 2
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    cout << c << endl;
    // this line will print 3

    a = 2;

    cout << c << endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // c will still be 3 because c was calculated before a was changed to 2.

    c = a + b;

    cout << c << endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // now c will be 4 as the calculation is done after a was changed to 2.

    //Excercise 3
    int n, rem;

    cout << "please enter a number" << std::endl;
    cin >> n;

    rem = n % 2;
    //this line outputs an error if we set the type for n to double. 

    cout << "in the following line 0 means even and 1 means odd" << endl;
    cout << rem << endl;

    //Excercise 4
    cout << 5/2 << endl;

    //Excercise 5
    cout << 5.0/2 << endl;
}
#include <iostream>
using namespace std;

int main() {
    int upper_limit, lower_limit, guess;
    cin >> upper_limit >> lower_limit;
    guess = (upper_limit + lower_limit) / 2;

    // higher = 2, lower = 1, correct = 0
    int response;
    cout << "Is your number " << guess << "? (2 for higher, 1 for lower, 0 for correct): ";
    cin >> response;
    while (response != 0) {
        if (response == 2) {
            lower_limit = guess + 1;
        } else if (response == 1) {
            upper_limit = guess - 1;
        } else {
            cout << "Invalid response. Please enter 2 for higher, 1 for lower, or 0 for correct." << endl;
            // continue; // Skip the rest of the loop and ask for input again
        }
        guess = (upper_limit + lower_limit) / 2;
        cout << "Is your number " << guess << "? (2 for higher, 1 for lower, 0 for correct): ";
        cin >> response;
    }
    cout << "Your number is " << guess << "." << endl;
}
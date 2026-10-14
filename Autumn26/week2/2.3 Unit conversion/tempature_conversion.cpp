#include <iostream>

using namespace std;

int main() {
    double temp;
    char unit;

    cout << "Please enter the temperature followed by its unit with a space in between: ";
    cin >> temp >> unit;

    if (unit == 'C' || unit == 'c') {
        cout << temp * 9 / 5 + 32 << " F" << endl;
    } else if (unit == 'F' || unit == 'f') {
        cout << (temp - 32) * 5 / 9 << " C" << endl;
    } else {
        cout << "Error, unit not recognised." << endl;
    }
}
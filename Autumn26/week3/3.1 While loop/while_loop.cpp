#include <iostream>
#include <string>

using namespace std;

int main() {
    double x, result;
    int n, i = 0;

    cin >> x >> n;

    while (i < n) {
        result += x;
        i++;
        // cout << i << " " << x << endl;
    }
    cout << result << endl;

    // Exercise 2
    int n = 1;

    while (n <= 10 && n >= 10) {
        cin >> n;
        cout << n << endl;
    }

    // Exercise 3
    string str = " ";

    cin >> str;
    while (str != "STOP") {
        cout << str << endl;
        cin >> str;
    }

    // Exercise 4
    string str1 = " ";

    cin >> str1;
    while (str1 != "STOP" && str1 != "stop") {
        cout << str1 << endl;
        cin >> str1;
    }

    // Exercise 5
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    sum += num;

    while(num != 0) {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        cout << "The sum so far is: " << sum << endl;
    }

    // Exercise 6
    int num, sum = 0, average, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    sum += num;
    count++;

    while(num != 0) {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        count++;
        // cout << "The sum so far is: " << sum << endl;
        cout << "The average so far is: " << sum / count << endl;
    }

    // Exercise 7
    int dividend, divisor, reminder, quotient;
    cin >> dividend >> divisor;
    while (dividend >= divisor && divisor != 0) {
        dividend -= divisor;
        quotient++;
    }
    reminder = dividend;
    cout << "Quotient: " << quotient << endl;
    cout << "Reminder: " << reminder << endl;
}


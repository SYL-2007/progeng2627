#include <iostream>

using namespace std;

bool leap_year(int year){
    bool ly;

    ly = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
}

bool longMonth(int month) {
    return (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
            || month == 10 || month == 12);
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    bool leapFlag = leap_year(y1);

    y2 = y1;
    m2 = m1;
    d2 = d1;

    if (longMonth(m1) && d1 == 31) {
        if (m1 == 12) {
            d2 = 1;
            m2 = 1;
            y2 += 1;
        } else {
            d2 = 1;
            m2 += 1;
        }
        
    } else if (!longMonth(m1) && d1 == 30) {
        d2 = 1;
        m2 ++;
    } else if (m1 == 2 && d1 == 28 && !leapFlag) {
        d2 = 1;
        m2 ++;
    } else if (m1 == 2 && d1 == 29 && leapFlag) {
        d2 = 1;
        m2 ++;
    } else {
        d2 ++;
    }


    // (this function should not print anything)

    // months that have 31 days: 1, 3, 5, 7, 8, 10, 12
    // months that have 30 days: 2, 4, 6, 9, 11
    // 2: 28 for normal, 29 for leap.

}

int main(){
    // TODO: write a main to test the function
    int d1, m1, y1, d2 = 0, m2 = 0, y2 = 0;
    // while (true) {
    //     cin >> d1 >> m1 >> y1;
    //     next_date(d1, m1, y1, d2, m2, y2);
    //     cout << d2 << "/" << m2 << "/" << y2 << endl;
    // }
    d1 = 28; m1 = 2; y1 = 2024;
    next_date(d1, m1, y1, d2, m2, y2);
    cout << (d2 == 29 && m2 == 2 && y2 == 2024) << endl;

    d1 = 31; m1 = 12; y1 = 2026;
    next_date(d1, m1, y1, d2, m2, y2);
    cout << (d2 == 1 && m2 == 1 && y2 == 2027) << endl;

    d1 = 30; m1 = 9; y1 = 1999;
    next_date(d1, m1, y1, d2, m2, y2);
    cout << (d2 == 1 && m2 == 10 && y2 == 1999) << endl;
}
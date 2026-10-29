#include <iostream>

using namespace std;

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;

    ly = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    return ly;
    // we *do not print* anything in the function
}

int main(){

    int input_year;

    cout << "please enter a year" << endl;
    cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 

    if(leap_year(input_year)){
        cout << "it's a leap year" << endl;
    }
    else{
        cout << "it's not a leap year" << endl;
    }
}
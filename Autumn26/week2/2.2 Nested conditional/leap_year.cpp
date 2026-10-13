// still incomplete
#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "Please enter a year" << endl;
    cin >> year;

    if( (year % 400) == 0){
        // if multiple of 400
        cout << "leap year" << endl;
        return 0;
        // ...

    }

    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            cout << "not a leap year" << endl;
            return 0;
            // ...

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            cout << "leap year" << endl;
            return 0;
            // ...

        }
    }
    else{
        // if not multiple of 4
        cout << "not a leap year" << endl;
    }
}
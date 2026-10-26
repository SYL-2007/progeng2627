#include <iostream>

using namespace std;

int myfactorial(int in){
// in is not a special name
// just a name

    int fact;
    for (fact = 1; in > 1; in--){
        fact *= in;
    }


    return fact;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}
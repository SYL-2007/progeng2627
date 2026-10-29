#include <iostream>
#include <string>

using namespace std;

void textSwap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

int main(){
    string a = "Hello", b = "World";
    textSwap(a, b);
    cout << (a == "World" && b == "Hello") << endl; // true
    return 0;
}
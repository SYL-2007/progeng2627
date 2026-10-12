#include <iostream>
using namespace std;

int main() {
    //Excercise 1
    double sideA, sideB;
    cout << "Please enter the length of side A" << endl;
    cin >> sideA;
    cout << "Please enter the length of side B" << endl;
    cin >> sideB;
    cout << "The perimeter of the rectangle is " << 2 * (sideA + sideB) << endl;

    //Excercise 2 Currancy conversion
    double amount, rate = 1.18;
    cout << "Please enter the amount of Pounds you want to convert" << endl;
    cin >> amount;
    cout << "The converted amount in Euros is " << amount * rate << endl;

    //Excercise 3 C to F
    double celsius;
    cout << "Please enter the temperature in Celsius" << endl;
    cin >> celsius;
    cout << "The temperature in Fahrenheit is " << celsius * 9/5 + 32 << endl;

    //Excercise 4 BMI calculator
    double weight, height;
    cout << "Please enter your weight in kg" << endl;
    cin >> weight;
    cout << "Please enter your height in m" << endl;
    cin >> height;
    cout << "Your BMI is " << weight / (height * height) << endl;
}
#include <iostream>
#include <vector>

using namespace std;

double sum_vector(vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main() {
    vector<double> v;
    int n, input;

    cout << "please enter n: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "please enter a number: " << endl;
        cin >> input;
        v.push_back(input);
    }

    cout << "the sum is: " << sum_vector(v) << endl;
}
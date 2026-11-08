#include <iostream>
#include <vector>

using namespace std;

int min_vector_element(const vector<double>& vin) {
    if(vin.empty()) return -1;
    int minIndex = 0;
    for(int i = 1; i < vin.size(); i++) {
        if(vin[i] < vin[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    vector<double> myVect{
        3.5, 2.1, 4.7, 1.9, 5.6
    };
    vector<double> myVect2{
        3.5, 2.1, 4.7, 1.9, 5.6, -0.4
    };
    vector<double> myVect3{};

    cout << (min_vector_element(myVect) == 3) << endl;
    cout << (min_vector_element(myVect2) == 5) << endl;
    cout << (min_vector_element(myVect3) == -1) << endl;
}
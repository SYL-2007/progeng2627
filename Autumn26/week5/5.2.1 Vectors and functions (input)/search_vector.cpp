#include <iostream>
#include <vector>

using namespace std;

int search_vector(int n, const vector<int>& vin) {
    for(int i = 0; i < vin.size(); i++) {
        if(vin[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> myVect{
        3, 2, 4, 1, 5
    };
    vector<int> myVect2{
        3, 2, 4, 1, 5, -1
    };
    vector<int> myVect3{};

    cout << (search_vector(4, myVect) == 2) << endl;
    cout << (search_vector(-1, myVect2) == 5) << endl;
    cout << (search_vector(0, myVect3) == -1) << endl;
}
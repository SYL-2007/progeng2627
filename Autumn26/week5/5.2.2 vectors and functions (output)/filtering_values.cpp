#include <iostream>
#include <vector>

using namespace std;

void filter_v(const vector<double>& vin, double t, vector<double>& vout) {
    for (int item : vin) {
        if (item < t) vout.push_back(item);
    }
}

int main() {
    vector<double> vin{1.0, 2.0, 3.0, 4.0, 5.0};
    vector<double> vout;
    vector<double> ans{1.0, 2.0};
    filter_v(vin, 3.0, vout);
    cout << (vout == ans) << endl;

}
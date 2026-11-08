#include <iostream>
#include <vector>

using namespace std;

void append_vectors(const std::vector<int>& vin1, const vector<int>& vin2, vector<int>& vout) {
    vout.insert(vout.end(), vin1.begin(), vin1.end());
    vout.insert(vout.end(), vin2.begin(), vin2.end());
}

int main() {
    bool resultFlag = true;
    vector<int> vin1 {1, 7, 3, 4};
    vector<int> vin2 {2, -2, 19,};
    vector<int> vout;
    append_vectors(vin1, vin2, vout);

    for (int i = 0; i < vout.size(); i++) {
        switch (i) {
            case 0:
                resultFlag = (vout[i] == 1);
                break;
            case 1:
                resultFlag = (vout[i] == 7);
                break;
            case 2:
                resultFlag = (vout[i] == 3);
                break;
            case 3:
                resultFlag = (vout[i] == 4);
                break;
            case 4:
                resultFlag = (vout[i] == 2);
                break;
            case 5:
                resultFlag = (vout[i] == -2);
                break;
            case 6:
                resultFlag = (vout[i] == 19);
                break;  
        }

    }
    cout << resultFlag << endl;
}
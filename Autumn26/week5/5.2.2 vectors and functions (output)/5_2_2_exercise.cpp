#include <iostream>
#include <vector>

using namespace std;

void from_1_to_n(int n, vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    vector<int> v;
    for(int n = 3; n < 7; n++){

        v.clear(); //without this this function would keep adding to the vector and not return values as expected.
        from_1_to_n(n, v);

        cout << "printing vector:" << endl;
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << endl;
        }
    }
}
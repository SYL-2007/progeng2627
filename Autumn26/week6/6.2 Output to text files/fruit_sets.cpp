#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

int search_vector(string n, const vector<string>& vin) {
    for(int i = 0; i < vin.size(); i++) {
        if(vin[i] == n) {
            return i;
        }
    }
    return -1;
}

void union_vector(const vector<string>& vin1, const vector<string>& vin2, vector<string>& vout) {
    vout = vin1;
    for (const auto& str : vin2) {
        if (search_vector(str, vin1) == -1) {
            vout.push_back(str);
        }
    }
}


void intersection_vector(const vector<string>& vin1, const vector<string>& vin2, vector<string>& vout) {
    for (const auto& str : vin1) {
        if (search_vector(str, vin2) != -1) {
            vout.push_back(str);
        }
    }
}

int main() {
    ifstream infile1;
    infile1.open("warehouse1.txt");

    ifstream infile2;
    infile2.open("warehouse2.txt");

    vector<string> v1;
    vector<string> v2;
    vector<string> unionSet;
    vector<string> intersectionSet;

    if(!infile1.is_open() || !infile2.is_open()) {
        cout << "error opening file" << endl;
        return EXIT_FAILURE;
    }

    string tmp;

    while(infile1 >> tmp) {
        v1.push_back(tmp);
    }

    while(infile2 >> tmp) {
        v2.push_back(tmp);
    }

    infile1.close();
    infile2.close();

    union_vector(v1, v2, unionSet);
    intersection_vector(v1, v2, intersectionSet);

    ofstream outfileUnion;
    outfileUnion.open("union.txt");
    ofstream outfileIntersection;
    outfileIntersection.open("intersection.txt");

    if(!outfileUnion.is_open() || !outfileIntersection.is_open()) {
        cout << "error opening file" << endl;
        return EXIT_FAILURE;
    }

    for(const auto& str : unionSet) {
        outfileUnion << str << endl;
    }

    for(const auto& str : intersectionSet) {
        outfileIntersection << str << endl;
    }
    outfileUnion.close();
    outfileIntersection.close();

}
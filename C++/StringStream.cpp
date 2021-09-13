#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char ch;
    int ival;
    vector<int> ivec;
    
    while (!ss.eof()) {
        if (ss >> ival) {
            ivec.push_back(ival);
            ss >> ch;
        }
        else {
            ss >> ch;
        }

    }
    return ivec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

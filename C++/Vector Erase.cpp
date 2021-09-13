#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int position = 0;
    int size = 0;
    int val = 0;
    int up_limit = 0, low_limit = 0;
    vector<int> ivec;
    
    cin>>size;
    for(int i=0; i<size; ++i){
        cin >> val;
        ivec.push_back(val);
    }
    
    cin >> position;
    ivec.erase(ivec.begin() + position - 1);
    
    cin >> low_limit >> up_limit;
    ivec.erase(ivec.begin() + low_limit - 1, ivec.begin() + up_limit - 1);
    
    cout << ivec.size() << "\n";
    
    for(int val : ivec){
        cout << val << " ";
    }
    
    return 0;
}

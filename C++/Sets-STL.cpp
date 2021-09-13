#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int number_of_querry {0};
    set<int> mySet;
    
    cin >>  number_of_querry;
    
    for(int i=0; i<number_of_querry; ++i){
        int type_of_querry{0};
        int val {0};
        set<int>::iterator iter;
                
        cin >> type_of_querry;
        
        switch(type_of_querry){
            case 1:
            cin >> val;
            mySet.insert(val);
            break;
            
            case 2:
            cin >> val;
            iter = mySet.find(val);
            if(iter != mySet.end()){
                mySet.erase(val);
            }
            break;
            
            case 3:
            cin >> val;
            iter = mySet.find(val);
            if(iter != mySet.end()){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
            break;
        }
    }
    
    return 0;
}




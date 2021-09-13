#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int number_of_query{0};
    map<string, int> map_student_grades;
    
    cin >> number_of_query;
    
    for(int i=0; i<number_of_query; ++i){
        string name{""};
        int grade{0}, type_of_query{0};
        
        cin >> type_of_query;
        switch (type_of_query) {
        case 1:
            cin >> name >> grade;
            map_student_grades[name] += grade;
            break;
        case 2:
            cin >> name;
            map_student_grades.erase(name);
            break;    
        case 3:
            cin >> name;
            cout << map_student_grades[name] << "\n";
            break;
        }
    }  
    return 0;
}




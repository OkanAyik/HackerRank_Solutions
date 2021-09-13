#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>v_vector;
    int size,ival;
    cin>>size;
    for(int i=0;i<size;i++)
    {
      cin>>ival;
      v_vector.push_back(ival);
    }
    sort(v_vector.begin(),v_vector.end());

    for(int i=0;i<v_vector.size();i++)
        printf("%d ",v_vector[i]);
    return 0;
}

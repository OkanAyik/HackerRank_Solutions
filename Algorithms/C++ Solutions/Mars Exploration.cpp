#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int counter{0};
   
    for(int i=0; i<s.size()-2; i = i+3){
       
        if(s.at(i) != 'S')
            ++counter;
        if(s.at(i+1) != 'O')
            ++counter;
        if(s.at(i+2) != 'S')
            ++counter;
    }
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
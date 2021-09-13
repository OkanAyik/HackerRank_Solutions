#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string s_hour = s.substr(0, 2);
    int i_hour = stoi(s_hour);
    size_t pos = s.find("PM");
    
    if(pos != string::npos){
        if(i_hour + 12 < 24)
            s_hour = to_string(i_hour + 12);
    }
    else{
        if(i_hour == 12)
            s_hour = "00";
    }
    return s.replace(0,2, s_hour).erase(s.size() - 2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

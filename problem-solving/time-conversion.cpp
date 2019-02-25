#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

string timeConversion(string s) {
    int stringLength = s.length();
    int hh = atoi(s.substr(0,2).c_str());
    if(s.substr(stringLength-2,2)=="AM" &&  hh == 12 ){
            s.replace(0,2,"00");
    }
    if(s.substr(stringLength-2,2)=="PM" && hh != 12){
        hh += 12;
        s.replace(0,2,to_string(hh));
    }
    return s.replace(stringLength-2,2,"");
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

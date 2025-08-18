#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string period = s.substr(8, 2);
    string hour = s.substr(0, 2);
    string rest = s.substr(2, 6);
    
    if (period == "AM") {
        if (hour == "12") {
            hour = "00";
        }
    } else {
        if (hour != "12") {
            int h = stoi(hour) + 12;
            hour = to_string(h);
        }
    }
    
    return hour + rest;
}

int main() {
    string s;
    cin >> s;
    cout << timeConversion(s) << endl;
    return 0;
}

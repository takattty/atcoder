#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c, d;
    vector<string> n(4);
    bool h   = false;
    bool bb  = false;
    bool bbb = false;
    bool hr  = false;

    for(int i=0; i<4; i++) {
        cin >> n.at(i);
    }

    for(auto x : n) {
        if (x == "H") h = true;
        if (x == "2B") bb = true;
        if (x == "3B") bbb = true;
        if (x == "HR") hr = true;
    }

    if (h && bb && bbb && hr) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
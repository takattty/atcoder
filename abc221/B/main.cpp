#include <bits/stdc++.h>
using namespace std;

int main() {
    bool mach = false;
    string s, t;
    cin >> s >> t;

    if (s == t) {
        mach = true;
    } else {
        for(int i=0; i<s.size()-1; i++) {
            char front = s.at(i);
            char back = s.at(i+1);
            s.at(i) = back;
            s.at(i+1) = front;
            if (s == t) {
                mach = true;
            }
            s.at(i) = front;
            s.at(i+1) = back;
        }
    }

    if (mach) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
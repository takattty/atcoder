#include <bits/stdc++.h>
using namespace std;

int main() {
    // ここbooleanで判別してるけど、Yes/Noでタグ持ってもいいな。出力の時条件分岐書かなくて良いから
    // bool mach = false;
    // string s, t;
    // cin >> s >> t;

    // if (s == t) {
    //     mach = true;
    // } else {
    //     for(int i=0; i<s.size()-1; i++) {
    //         char front = s.at(i);
    //         char back = s.at(i+1);
    //         s.at(i) = back;
    //         s.at(i+1) = front;
    //         if (s == t) {
    //             mach = true;
    //         }
    //         s.at(i) = front;
    //         s.at(i+1) = back;
    //     }
    // }

    // if (mach) {
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }

    string ans = "No";
    string s, t; cin >> s >> t;

    if(s == t) {
        ans = "Yes";
    } else {
        for(int i=0; i<s.size()-1; i++) {
            swap(s.at(i), s.at(i+1));
            if(s == t) ans = "Yes";
            swap(s.at(i), s.at(i+1));
        }
    }

    cout << ans << endl;
}
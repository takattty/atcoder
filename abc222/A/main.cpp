#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin >> n;
    if(n.size() == 3) {
        cout << "0" + n << endl;
    } else if (n.size() == 2) {
       cout << "00" + n << endl;
    } else if (n.size() == 1) {
        cout << "000" + n << endl;
    } else {
        cout << n << endl;
    }
}
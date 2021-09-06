#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, alice=0, bob=0;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for(int i=0; i<a.size(); i++) {
        if(i%2 == 0) alice+= a.at(i);
        else bob+= a.at(i);
    }

    cout << alice - bob << endl;
}
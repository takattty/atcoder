#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> S;

    for(int i=0; i<n; i++) {
        int num = 0;
        cin >> num;
        S.insert(num);
    }

    cout << S.size() << endl;
}
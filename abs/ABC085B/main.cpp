#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> res(n);
    for(int i=0; i<n; i++) {
      cin >> res.at(i);
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());

    cout << res.size() << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, p; cin >> n >> p;
    vector<long long> res(n);
    int count = 0;
    for(long long i=0; i<n; i++) {
        cin >> res.at(i);
    }

    for(long long i=0; i<n; i++) {
        if(res.at(i) < p) count++;
    }

    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int count = n;
    int pb=0;
    vector< vector<int> > data(n);

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        for(int k=0; k<x; k++) {
            cin >> pb;
            data.at(i).push_back(pb);
        }
    }

    for(int i=0; i<n; i++) {
        for(int k=i+1; k<n; k++) {
            if(data.at(i) == data.at(k)) count--;
        }
    }
    
    if(n == 1) {
        cout << 1 << endl;
    } else {
        cout << count << endl;
    }
}
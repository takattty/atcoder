#include <bits/stdc++.h>
using namespace std;

int main() {
    string x; cin >> x;
    int n; cin >> n;
    vector<string> data(n);
    vector<string> ans(n);
    for(int i=0; i<n; i++) {
        cin >> data.at(i);
    }

    for(int i=0; i<x.size(); i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<data.at(j).size(); k++) {
                if(x.at(i) == data.at(j).at(k) && find(ans.begin(), ans.end(), data.at(j)) == data.end()) {
                    ans.push_back(data.at(j));
                }
            }
        }
    }

    for(auto x : ans) cout << x << endl;
}
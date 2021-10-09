#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector< vector<int> > data(n, vector<int>(m));
    map<int, int> result;

    for(int i=0; i<2*n; i++) {
        result[i] = 0;
    }

    for(int i=0; i<2*n; i++) {
        for(int j=0; j<m; j++) {
            cin >> data.at(i).at(j);
        }
    }

    // for(int j=0; j<m; j++) {
    //     for(int k=1; k<=n; k++) {
    //        if(data.at(2*k-1).at(j) == 'G' && data.at(2*k).at(j) == 'P') {
    //             result[2*k-1]++;
    //         } else if(data.at(2*k -1).at(j) == 'G' && data.at(2*k).at(j) == 'C') {
    //             result[2*k]++;
    //         } else if(data.at(2*k -1).at(j) == 'C' && data.at(2*k).at(j) == 'P') {
    //             result[2*k-1]++;
    //         } else if(data.at(2*k -1).at(j) == 'C' && data.at(2*k).at(j) == 'G') {
    //             result[2*k]++;
    //         } else if(data.at(2*k -1).at(j) == 'P' && data.at(2*k).at(j) == 'G') {
    //             result[2*k-1]++;
    //         } else if(data.at(2*k -1).at(j) == 'P' && data.at(2*k).at(j) == 'C') {
    //             result[2*k]++;
    //         }
    //     }
    // }

    // for(int i=0; i<2*n; i++) {
    //     cout << result.at(i) << endl;
    // }
}
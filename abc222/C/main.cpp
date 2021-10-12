#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector< vector<char> > data(2*n, vector<char>(m));
    vector<pair<int, int> > result(2*n);

    for(int i=0; i<2*n; i++) {
        result.at(i) = make_pair(0, i+1);
    }

    for(int i=0; i<2*n; i++) {
        for(int j=0; j<m; j++) {
            cin >> data.at(i).at(j);
        }
    }

    for(int j=0; j<m; j++) {
        for(int k=0; k<n; k++) {
            int player1 = result.at(2*k).second;
            int player2 = result.at(2*k+1).second;
            if(data.at(player1-1).at(j) == 'G' && data.at(player2-1).at(j) == 'C') {
                result.at(2*k).first--;
            } else if(data.at(player1-1).at(j) == 'G' && data.at(player2-1).at(j) == 'P') {
                result.at(2*k+1).first--;
            } else if(data.at(player1-1).at(j) == 'C' && data.at(player2-1).at(j) == 'G') {
                result.at(2*k+1).first--;
            } else if(data.at(player1-1).at(j) == 'C' && data.at(player2-1).at(j) == 'P') {
                result.at(2*k).first--;
            } else if(data.at(player1-1).at(j) == 'P' && data.at(player2-1).at(j) == 'G') {
                result.at(2*k).first--;
            } else if(data.at(player1-1).at(j) == 'P' && data.at(player2-1).at(j) == 'C') {
                result.at(2*k+1).first--;
            }
        }
        sort(result.begin(), result.end());
    }

    for(int i=0; i<2*n; i++) {
        cout << result.at(i).second << endl;
    }
}
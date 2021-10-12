#include <bits/stdc++.h>
using namespace std;

int main() {
  string n; cin >> n;
  sort(n.begin(), n.end());
  int maxed = 0;

  do {
    for(int i=1; i<n.size(); i++) {
      string first = "", second = "";

      for(int j=0; j<i; j++) {
        first += n.at(j);
      }

      for(int k=i; k<n.size(); k++) {
        second += n.at(k);
      }

      if(first.at(0) == '0' || second.at(0) == '0') continue;
      // cout << first << " : " << second << endl;
      maxed = max(maxed, stoi(first)*stoi(second));
    }
  } while (next_permutation(n.begin(), n.end())); // この順列の処理はsortが大事です。

  cout << maxed << endl;
}
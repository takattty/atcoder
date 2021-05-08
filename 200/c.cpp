#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, res;
  cin >> n;
  vector<int> ans(n);

  for(int i=0; i<n; i++) {
    cin >> ans.at(i);
  }

  while(1) {
    for(int i=0; i<n-1; i++) {
      if(ans.at(i) - ans.at(i+1) % 200 == 0) {
        res++;
      }
    }
    ans.erase(ans.begin());
  }

  cout << res << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  map<int, int> ans;

  for (int i=0; i<n; i++) {
    cin >> vec.at(i);
  }

  for (int i=0; i<n; i++) {
    ans[i] = vec.at(i);
  }
  for (int i=0; i<n; i++) {
    cout << ans[i] << endl;
  }

  cout << ans.at(n-2) << endl;
}
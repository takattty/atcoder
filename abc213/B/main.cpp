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
    cout << vec.at(i) << endl;
  }

  for (int i=0; i<n; i++) {
    ans[vec.at(i)] = i+1;
  }

  for (int i=0; i<n; i++) {
    cout << ans[vec.at(i)] << endl;
  }

  for (auto p : ans) {
    auto k = p.first;
    auto v = p.second;
    cout << k << " => " << v << endl;
  }

}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, res=0;
  cin >> n >> k;

  // for(int i=1; i<=n; i++) {
  //   for(int j=1; j<=k; j++) {
  //     string s_i = to_string(i);
  //     string s_j = to_string(j);
  //     string s_num = s_i + "0" + s_j;
  //     res += stoi(s_num);
  //   }
  // }
  // 公式
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=k; j++) {
      res += i * 100 + j;
      // 文字列を使って101等を表現するんじゃなくて、*100をして表現。
    }
  }
  cout << res << endl;
}
#include <bits/stdc++.h>
using namespace std;

// bool checkPalindrome(int i, string j) { // 777
//   // cout << i << "  " << j << endl;
//   reverse(j.begin(), j.end());
//   if(to_string(i) == j) {
//     return true;
//   } else {
//     return false;
//   }
// }

// bool checkPalindromeZero(int i, string j) { // 1210 i=1210, j=121
//   reverse(j.begin(), j.end());
//   string s_i = to_string(i);
//   s_i.erase(s_i.length() - 1);
//   // cout << "j=" << j << "  " << "s_i=" << s_i << endl;
//   if(s_i == j) {
//     return true;
//   } else {
//     return false;
//   }
// }

bool isPalindrome(string s) {
  string rs = s;
  reverse(rs.begin(), rs.end());
  return s == rs;
}

int main() {
  long long n;
  cin >> n;

  if(n == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  // string s_n;
  // s_n = to_string(n);
  // // cout << checkPalindromeZero(n, s_n.erase(s_n.length() - 1)) << endl;

  // if(checkPalindrome(n, s_n) || (s_n.substr(s_n.length() - 1) == "0" && checkPalindromeZero(n, s_n.erase(s_n.length() - 1)))) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  while(n%10 == 0) {
    n /= 10;
  }

  if(isPalindrome(to_string(n))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

//今回想定しないといけないのは、12100の様に末尾に0が複数付いている場合。
//1210はYesなのに12100はNoになります。
//あと上の関数の引数の部分、渡す時にStringにしちゃって関数内ではそれとリバースバージョンを処理すればいい。
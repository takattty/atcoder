#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c;

  if(a == 1) {
    d = 6;
  } 
  else if(a == 2) {
    d = 5;
  } 
  else if(a == 3) {
    d = 4;
  }
  else if(a == 4) {
    d = 3;
  }
  else if(a == 5) {
    d = 2;
  }
  else if(a == 6) {
    d = 1;
  }

  if(b == 1) {
    e = 6;
  } 
  else if(b == 2) {
    e = 5;
  } 
  else if(b == 3) {
    e = 4;
  }
  else if(b == 4) {
    e = 3;
  }
  else if(b == 5) {
    e = 2;
  }
  else if(b == 6) {
    e = 1;
  }

  if(c == 1) {
    f = 6;
  } 
  else if(c == 2) {
    f = 5;
  } 
  else if(c == 3) {
    f = 4;
  }
  else if(c == 4) {
    f = 3;
  }
  else if(c == 5) {
    f = 2;
  }
  else if(c == 6) {
    f = 1;
  }

  cout << d + e + f << endl;
}

// 公式解説
// サイコロの裏面の値は、``7 - hoge``で出力出来るのでそれを利用する。
// なので、(7-1) + (7-3) + (7-5) = 7 + 7 + 7 - (1 + 3 + 5)でもとまるので

// int main() {
//   int a, b, c;
//   cin >> a >> b >> c;
//   cout << (21 - (a + b + c)) << endl;
// }

// 大事なのは、サイコロで出た目と反対の目がどういった規則性があるかを考えること。
// 今回だと、出た目＋反対の目＝7という規則性。
// これを利用すると上の公式ソースコードの様に早くわかりやすくコードが書ける。
// Problemsでもこういった考え方の癖を身に付けたいし、経験を増やしたい。

// 大事なワード：規則性の発見
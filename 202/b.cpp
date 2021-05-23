#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  reverse(n.begin(), n.end());

  for(int i = 0; i < n.size(); i++){
    char ch = n[i];
    if(ch == '6') {
      n[i] = '9';
    } else if(ch == '9') {
      n[i] = '6';
    }
  }

  cout << n << endl;
}

// これは公式と考え方と流れは一緒でしたので、省略。強いていうならもう少し短く書けますよくらいかな。
// int main() {
//   string n;
//   cin >> n;

//   reverse(n.begin(), n.end());

//   for(int i = 0; i < n.size(); i++) {
//     if(n[i] == '6') n[i] = '9';
//     else if(n[i] == '9') n[i] = '6';
//   }

//   cout << n << endl;
// }
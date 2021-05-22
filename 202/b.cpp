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
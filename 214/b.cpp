#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, r=0, a=0;
  cin >> n;

  while(1) {
      if(pow(2, a) > n) {
          r = a-1;
          break;
      } else {
          a++;
      }
  }
  cout << r << endl;
}
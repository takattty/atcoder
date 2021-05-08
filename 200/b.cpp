#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  for(long long i=0; i<k; i++) {
    if(n % 200 == 0) {
      n /= 200;
    } else {
      string to_n = to_string(n);
      string to_n_plus = to_n + "200";
      n = stoll(to_n_plus);
    }
  }
  cout << n << endl;
}
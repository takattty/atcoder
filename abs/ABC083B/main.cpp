#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
    int n, a, b, total=0, sum=0;
    cin >> n >> a >> b;

    for(int i=1; i<=n; i++) {
        sum = findSumOfDigits(i);
        if(sum >= a && sum <= b) {
            total += i;
        }
    }

    cout << total << endl;
}
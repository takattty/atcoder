#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, t, result=0;

  cin >> s >> t;

  for(int a=0; a<=100; a++) {
      for(int b=0; b<=100; b++) {
          for(int c=0; c<=100; c++) {
              if( a+b+c <= s && a*b*c <= t ) {
                  result++;
              }
          }
      }
  }

  cout << result << endl;
}
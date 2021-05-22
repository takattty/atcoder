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
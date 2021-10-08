#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // powは1.07374e+の様にdouble型で値を返す。のでキャストしてあげないといけない、
    cout << (int)pow(32, a-b) << endl;
}
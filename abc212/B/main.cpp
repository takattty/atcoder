#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if( (a == b && b == c && c == d && d == a) ) cout << "Weak" << endl;
    else cout << "Strong" << endl;
}
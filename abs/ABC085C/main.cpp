#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, y; cin >> n >> y;

    int A = -1;
    int B = -1;
    int C = -1;

    for(int i=0; i<=n; i++) {
        for(int j=0; j+i<=n; j++) {
            int k = n - i - j;
            if((10000*i + 5000*j + 1000*k) == y)  {
                A = i;
                B = j;
                C = k;
                break;
            }
        }
    }

    cout << A << " " << B << " " << C << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {  
    long long n;
    cin >> n;
    int k=1;

    while(pow(2, k) <= n) {
        if(pow(2, k) > n) {
            break;
        }
        k++;
    }

    cout << k-1 << endl;
}

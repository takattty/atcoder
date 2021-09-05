#include <bits/stdc++.h>
using namespace std;
bool even = true;

bool isEven(vector<int> x) {
    for(int el : x) if(el%2 != 0) even = false;
    return even;
}

int main() {
    int n, result=0;
    vector<int> a(n);
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    while(isEven(a)) {
        for(int i=0; i<n; i++) {
            a.at(i) = a.at(i) / 2;
        }
    }

    cout << result << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long max;
    cin >> n;
    to_string(n);
    for(int i=0; i<n.size()-1; i++) {
        for (int j=0; j<n.size()-1; j++) {
            int a = stoi(n.at(i));
            n.erase(i);
            int b = stoi(n);
            if (mac < a * b) max = a * b;
        }
    }

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, count=0, total;
    cin >> A >> B >> C >> X;

    for(int a=0; a<=A; a++) {
        for(int b=0; b<=B; b++) {
            for(int c=0; c<=C; c++) {
                total = a*500 + b*100 + c*50;
                if(total == X) count++;
            }
        }
    }

    cout << count << endl;
}
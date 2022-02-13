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


// 合計値が決まっているので、先に計算した10000と5000の数から1000円札の数を計算するのがポイント
// 他に何でfor文の条件式を作るかが大事。今回だと合計n枚という条件だったのでそれを使う。
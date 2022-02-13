#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    vector<string> device = {"dream", "dreamer", "erase", "eraser"};

    // ここは受け取ったsを全て反転
    reverse(s.begin(), s.end());
    // 各単語を反転させている
    for (int i=0; i<4; i++) {
        reverse(device.at(i).begin(), device.at(i).end());
    }

    bool can = true;
    // sの文字列のサイズ分処理を繰り返す
    for (int i=0; i<s.size();) {
        // 4つの文字列たちのどれかでdivide出来るかどうかフラグ
        bool can2 = false;
        // これはdivide達を繰り返すfor文
        for (int j=0; j<4; j++) {
            string d = device.at(j);
            // substr = 部分文字列を取得する
            // substr(pos, n)
            // pos番目からn個分の要素の文字列を返す
            // substrで文字の完全一致を探す。
            if (s.substr(i, d.size()) == d) {
                can2 = true;
                // iは文字が次から被らない様に文字数分を代入。
                // substrで先に一致した文字を通り越して探せる様に。
                i += d.size();
            }
        }
        if (!can2) {
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}

// ポイントは、
// ・与えられた文字を組み合わせた場合の探し方
// ・当てはまる文字の探し方
// の2つ。

// 与えられた文字を組み合わせた場合は、前からではなく逆順にしてから探す
// →逆順にすると被る数が減って探しやすいから。
// 当てはまる文字の探し方
// →i += d.size()の部分で先に一致した文字を再度探さない様に添字を足し算してる。
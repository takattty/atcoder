#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string a, b, c, d;
    cin >> s;
    a = s.at(0);
    b = s.at(1);
    c = s.at(2);
    d = s.at(3);
    
    if( (a == b && b == c && c == d) || (stoi(b) == (stoi(a) + 1)%10 && stoi(c) == (stoi(b) + 1)%10 && stoi(d) == (stoi(c) + 1)%10) ) {
        cout << "Weak" << endl;
    } else { 
        cout << "Strong" << endl;
    }

    // 公式回答
    // このコードの方が断然良い理由は、数字が増えても変更箇所がマジで少ない事
    // 例えば100桁とかになると、俺のコードの方はマジで死ぬと思う。
    // だけどこのコードだとfor文の3を99にするだけで良いので素晴らしい。
    // 変更用異性ね。

    // string s;
    // cin >> s;
    // フラグを用意して、判別
    // bool same = true;
    // bool step = true;

    // ここで上の8~12までみたいに変数を作る手間を省いている
    // for (int i=0; i<3; i++) {
    // ここでまずは隣同士の値が同じ値かどうかを判別
    //     if(s[i] != s[i+1]) same = false;
    //     int a = s[i] - '0';
    //     int b = s[i+1] - '0';
    // ここで次の値かを判別
    //     if((a+1)%10 != b) step = false;
    // }
    // 一個でもtrueがあれば、Weak判定
    // if(same || step) cout << "Weak" << endl;
    // else cout << "Strong" << endl;
}
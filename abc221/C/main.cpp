#include <bits/stdc++.h>
using namespace std;

int main() {
    // long long n;
    // long long max;
    // cin >> n;
    // to_string(n);
    // for(int i=0; i<n.size()-1; i++) {
    //     for (int j=0; j<n.size()-1; j++) {
    //         int a = stoi(n.at(i));
    //         n.erase(i);
    //         int b = stoi(n);
    //         if (mac < a * b) max = a * b;
    //     }
    // }

    string N; cin >> N;
    sort(N.begin(),N.end());
    int ans = 0;
    do{
        for(int i=1; i<N.size(); i++){
            string l = "", r = "";

            // こっちは最初の文字だけを代入。
            for(int j=0; j<i; j++) {
                l += N[j];
            }

            // ここで残りの値を文字列でくっ付け続ける。
            for(int j=i; j<N.size(); j++) {
                r += N[j];
            }

            // 正整数に関する条件をここで調べる。
            if(l[0]=='0' || r[0]=='0') continue;

            // ここで今までの値の最大値を計算。
            ans = max(ans,stoi(l)*stoi(r));
        }
    }while(next_permutation(N.begin(),N.end()));
    cout << ans << endl;

}
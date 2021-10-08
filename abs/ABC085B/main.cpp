#include <bits/stdc++.h>
using namespace std;

/*
この問題は、今回配列に値を代入してソートして重複を除くunipue関数を用いた。
unipueにする事で。積み上げられる数が決まるのでsize()のみで答えを出せる。

【公式】
int num[110] = {0};  // バケット（餅が重複ありで何個あるか数える様の配列）
for (int i = 0; i < N; ++i) {
    num[d[i]]++;  // d[i] が 1 個増える
}
↑の様に答えを数える様の配列を用意。例えばb={2, 3, 5}だったら、配列numのindex番号2, 3, 3, 5の場所にインクリメントが処理される。
つまり、num = {0, 0, 1, 2, 0, 1}になる。
inputで重複した値があっても、numの値は増えるだけなので、問題無い。
for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
    if (num[i]) {  // 0 より大きかったら
        ++res;
    }
}
なぜなら、答えで必要なのは直径が0以上の餅が何個あるかなので
numの値が1だろうと3だろうとあまり関係ない。
↑の処理で言うと、直径3の餅は同じ直径なので1枚で対応する（仕様がそうだから）

その2
STL::set https://atcoder.jp/contests/apg4b/tasks/APG4b_aa の場合
set<int> values; // insert するときに重複を取り除いてくれます
for (int i = 0; i < N; ++i) {
    values.insert(d[i]); // 挿入します
}
自分と同じ様な処理を簡単にしてくれるsetと言うデータ構造。
重複の無いデータのまとまりを扱うためのデータ構造。
*/

int main() {
    int n; cin >> n;
    vector<int> res(n);
    for(int i=0; i<n; i++) {
      cin >> res.at(i);
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());

    cout << res.size() << endl;
}
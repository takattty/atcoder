#include <bits/stdc++.h>
using namespace std;

/*
【リファクタ前の最初のAC】
対戦表を2次元配列。勝利数と人の組み合わせのまとまりを、pair in 配列で用意。
pairの中身は、<勝利数, 人>の順番。
じゃんけんの2重ループ。順位順で対戦相手を決めて、その人がそのラウンドで出す手を取得して対決。
→間違えたのは、順位順に上からじゃんけんの手を出したと勘違いしていた。じゃなくて、全体を通して、その人が出す手は2Nの所で決まっている。
で大事なポイントがデクリメントをする部分。これは最後の結果発表の時に、同点なら値が小さい方を先にという制約があるから。
負の値でソートするとまずは一番値が小さい（つまり一番勝っている人）が最初に来て、徐々に値が大きくなる（0に近づく）。
同じ値だと人の値でソートをするのだが、ここは正の数なので小さい順に並ぶ（ここが制約を守る部分になる）

ポイントは、
- 問題の例を参考に、文を正しく理解する（人 i が j ラウンド目の試合で出す手が Ai,jであることを知っています）の部分。
- vector<pair>のデータ構造を使って、勝利数と人を整理する
- 制約をどう機械で表現するか（今回だと同点だと小さい順＝負の値を用いてソートで表現）

【リファクタ項目】
- じゃんけんの処理
*/

int main() {
    int n, m; cin >> n >> m;
    vector< vector<char> > data(2*n, vector<char>(m));
    vector<pair<int, int> > result(2*n);

    for(int i=0; i<2*n; i++) {
        result.at(i) = make_pair(0, i+1);
    }

    for(int i=0; i<2*n; i++) {
        for(int j=0; j<m; j++) {
            cin >> data.at(i).at(j);
        }
    }

    for(int j=0; j<m; j++) {
        for(int k=0; k<n; k++) {
            int player1 = result.at(2*k).second;
            int player2 = result.at(2*k+1).second;
            if(data.at(player1-1).at(j) == 'G' && data.at(player2-1).at(j) == 'C') {
                result.at(2*k).first--;
            } else if(data.at(player1-1).at(j) == 'G' && data.at(player2-1).at(j) == 'P') {
                result.at(2*k+1).first--;
            } else if(data.at(player1-1).at(j) == 'C' && data.at(player2-1).at(j) == 'G') {
                result.at(2*k+1).first--;
            } else if(data.at(player1-1).at(j) == 'C' && data.at(player2-1).at(j) == 'P') {
                result.at(2*k).first--;
            } else if(data.at(player1-1).at(j) == 'P' && data.at(player2-1).at(j) == 'G') {
                result.at(2*k).first--;
            } else if(data.at(player1-1).at(j) == 'P' && data.at(player2-1).at(j) == 'C') {
                result.at(2*k+1).first--;
            }
        }
        sort(result.begin(), result.end());
    }

    for(int i=0; i<2*n; i++) {
        cout << result.at(i).second << endl;
    }
}
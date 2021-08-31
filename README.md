# Atcoderリポジトリ

ABC用のリポジトリ。

## actoder-toolsについて

`atcoder` ディレクトリに移動し、下記のコマンドを実行

```
atcoder-tools gen <CONTEST_ID> --workspace=./ 
```

そしてダウンロードしたコンテストのディレクトリに移動し、問題を解く

テストの際は、下記のコマンドを実行。

```
atcoder-tools test
```

提出の際は

```
atcoder-tools submit (既に提出済みの場合は -u を付ける)
```

### テンプレ

```
#include <bits/stdc++.h>
using namespace std;

int main() {

}
```
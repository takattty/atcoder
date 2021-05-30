#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k=0, a=0, b=0;
  cin >> n >> k;
  map<long long, long long> ab_map;

  for(long long i=0; i<n; i++) {
    cin >> a >> b;
    ab_map[a] += b;
  }

  for (auto p : ab_map) {
    auto key = p.first;
    auto value = p.second;
    cout << "key: " << key << ", value: " << value << endl;
    if(k >= key) {// 持っているお金が次お金をくれる人に届くかを判定。
      k += value;// 友達に会ったから、お金を貰う。
    }
  }
  cout << k << endl;// 持っているお金の分のみ村を移動出来るので、お財布のみで村の移動分が考えられる。
}

// 大事なポイントは、
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n, result, hey;
//   cin >> n;

//   vector<int> a(n);
//   vector<int> b(n);
//   vector<int> c(n);
//   vector<int> d(n);

//   for(int i=0; i<n; i++) {
//     cin >> a.at(i);
//   }

//   for(int i=0; i<n; i++) {
//     cin >> b.at(i);
//   }

//   for(int i=0; i<n; i++) {
//     cin >> c.at(i);
//   }

//   // for(int i=0; i<n; i++) {
//   //   for(int j=0; j<n; j++) {
//   //     if(b.at((c.at(i))-1) == a.at(j)) {
//   //       res++;
//   //     }
//   //   }
//   // }

//   for(int i=0; i<n; i++) {
//     d.at(i) = b.at((c.at(i))-1);
//   }

//   for(int i=0; i<n; i++) {
//     cout << a.at(i);
//     cout << d.at(i);
//     auto j = find(d.begin(), d.end(), a.at(i));
//     if(j != d.end()) {
//       result++;
//     } else {
//       hey++;
//     }
//   }



//   cout << endl;
//   cout << result << endl;
//   cout << endl;
//   cout << hey << endl;
// }

// 参考コード
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n), b(n), c(n);
  vector<int> ct(n+1); // 要素はnなんだけど、1≤N≤10で今は考えているから。でも正直腑に落ちてはいないから、再度復習しようね。


  for(int i=0;i<n;i++){
      cin>>a.at(i);
  }
    for(int i=0;i<n;i++){
      cin>>b.at(i);
  }
    for(int i=0;i<n;i++){
      cin>>c.at(i);
  }
  
  // ここはBcjの値の数を新しい配列に代入。ここは値ではなくて、値の数を代入する事が一番大事な考え方。2重ループせずに計算量を抑えられるから。
  for(int i=0; i<n; i++) {
    ct.at(b.at(c.at(i)-1))++;
  }

  // ctの要素はBcjの値の数なので、Aiの値がctの添字と一致し取得した値を足し合わせていく。
  long long ans=0;
  for(int i=0; i<n; i++) {
    ans += ct.at(a.at(i));
  }
  cout<<ans<<endl;
}

// 今回の問題で大事なのは、配列の添字の考え方。
// 添字をある配列の値と対応させ、値自体をある配列の値の数として代入するという考え方が大事。
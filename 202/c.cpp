#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, result, hey;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  vector<int> d(n);

  for(int i=0; i<n; i++) {
    cin >> a.at(i);
  }

  for(int i=0; i<n; i++) {
    cin >> b.at(i);
  }

  for(int i=0; i<n; i++) {
    cin >> c.at(i);
  }

  // for(int i=0; i<n; i++) {
  //   for(int j=0; j<n; j++) {
  //     if(b.at((c.at(i))-1) == a.at(j)) {
  //       res++;
  //     }
  //   }
  // }

  for(int i=0; i<n; i++) {
    d.at(i) = b.at((c.at(i))-1);
  }

  for(int i=0; i<n; i++) {
    cout << a.at(i);
    cout << d.at(i);
    auto j = find(d.begin(), d.end(), a.at(i));
    if(j != d.end()) {
      result++;
    } else {
      hey++;
    }
  }



  cout << endl;
  cout << result << endl;
  cout << endl;
  cout << hey << endl;
}

// 参考コード
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// void solve(){
//     int n;
//     cin>>n;
//     int a[n];
//     int b[n];
//     int c[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//       for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
//       for(int i=0;i<n;i++){
//         cin>>c[i];
//     }
//     int ct[n+1];
//     int ct1[n+1];
//     for(int j=0;j<=n;j++){
//         ct[j]=0;
//         ct1[j]=0;
//     }
//     for(int i=0;i<n;i++){
//         ct[c[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         ct1[a[i]]++;
//     }
//     long long ans=0;
//     for(int i=0;i<n;i++){
//         if(ct1[b[i]]>0){
//             ans=ans+ct1[b[i]]*ct[i+1];

//         }
//     }
   
//     cout<<ans<<endl;
// }

// int main(){

//     solve();

//     return 0;
// }
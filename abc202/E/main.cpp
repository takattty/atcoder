#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;


void solve(long long N, std::vector<long long> P, long long Q, std::vector<long long> U, std::vector<long long> D){

}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> P(N-2+1);
    for(int i = 0 ; i < N-2+1 ; i++){
        std::scanf("%lld", &P[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> U(Q);
    std::vector<long long> D(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &D[i]);
    }
    solve(N, std::move(P), Q, std::move(U), std::move(D));
    return 0;
}

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

const long long MOD = 998244353;

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B, std::vector<std::vector<long long>> c){

}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &B[i]);
    }
    std::vector<std::vector<long long>> c(N, std::vector<long long>(M));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            std::scanf("%lld", &c[i][j]);
        }
    }
    solve(N, M, std::move(A), std::move(B), std::move(c));
    return 0;
}
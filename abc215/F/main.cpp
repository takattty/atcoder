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


void solve(long long N, std::vector<long long> x, std::vector<long long> y){

}

// Generated by 2.8.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(N, std::move(x), std::move(y));
    return 0;
}

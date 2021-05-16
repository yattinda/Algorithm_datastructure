#include <iostream>
#include <vector>
using namespace std;

const long long INF = 9999999;

template<class T> void chmin(T& a, T b){
    if(a > b){
        a = b;
    }
}

int n;
vector <long long> h;
vector <long long> dp;

long long rec(int i){
    if(dp[i] < INF){
        return dp[i];
    }

    if(i == 0){
        return 0;
    }

    long long res = INF;

    chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));

    if(i > 1){
        chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
    }

    return dp[i] = res;
}

int main(){
    int j;
    cin >> n;
    h.resize(n);
    for(j = 0; j < n; j++){
        cin >> h[j];
    }
      dp.assign(n, INF);

    cout << rec(n - 1) << endl;
}

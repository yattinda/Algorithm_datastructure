#include <iostream>
#include <vector>
using namespace std;

//aは書き換える必要があるので参照渡し,bは比較するだけで書き換える必要がないため値渡し
template<class T> void chmax(T& a, T b){
    if(a < b){
        a = b;
    }
}

int main(){
  int n;
  long long w;
  cin >> n >> w;

  vector<long long> weight(n), value(n);
  for(int i = 0; i < n; i++){
    cin >> weight[i] >> value[i];
  }
  vector<vector<long long>> dp(n + 1, vector<long long>(w + 1, 0));

  for(int i = 0; i < n; i++){
    for(int j = 0; j <= w; ++j){
      if(j - weight[i] >= 0){
        chmax(dp[i + 1][j], dp[i][j - weight[i]]+ value[i]);
      }
      chmax(dp[i + 1][w], dp[i][j]);
    }
  }
  cout << dp[n][w] <<endl;
}

#include <iostream>
#include <vector>

using namespace std;

vector<long long> memo;

long long fibo(int n){
  if(n == 0){
    return 0;
  } else if (n == 1){
    return 1;
  }

  if(memo[n] != -1){
    return memo[n];
  }

  return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main(){
  int a;
  memo.assign(50, -1);

  fibo(49);

  for(a = 2; a < 50; ++a){
    cout << a << ":" << memo[a] << endl;
  }
}

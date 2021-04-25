#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, w, i, j, bit;
  cin >> n >> w;
  vector<int> a(n);
  for(i = 0; i < n; ++i){
    cin >> a[n];
  }
  bool exist = false;
  //bitは2^n通り
  for(int = 0; bit < (1 << n); ++bit){
    //部分集合に含まれる要素の和
    int sum = 0;
    for(j = 0; j < n; ++j){
      //j番目の要素a[j]が部分集合に含まれているかどうか
      if(bit & (1 << j)){
        sum += a[j];
      }
    }

    if(sum == w){
      exist = true;
    }
  }
  if(exist){
    cout << "YES!" << endl;
  } else {
    cout << "NO!" << endl;
  }
}

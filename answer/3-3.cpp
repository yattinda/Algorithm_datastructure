#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int num, i, j, count = 0, min_num = 999998, booby_num = 999999;
  cin >> num;
  vector<int> a(num);
  for(i = 0; i < num; ++i){
    cin >> a[i];
  }

  for(j = 0; j < num; ++j){
    if(min_num > a[j]){
      booby_num = min_num;
      min_num = a[j];
    } else if (booby_num > a[j]){
      //2回目ループでbooby_numをどうにかする(n>=2より)
      booby_num = a[j];
    }
  }
  cout << booby_num << endl;
}

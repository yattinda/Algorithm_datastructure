#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int num, i, j, k, min = 9999999, max = 0;
  cin >> num;
  vector<int> a(num);
  for(i = 0; i < num; ++i){
    cin >> a[i];
  }

  for(j = 0; j < num; ++j){
    if(min > a[j]){
      min = a[j];
    }
    if(max < a[j]){
      max = a[j];
    }
  }

  cout << max - min << endl;
}

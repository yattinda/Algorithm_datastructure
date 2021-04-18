#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int INF = 99999999;

int main(){
  int num, max, i, j, k, l;
  cin >> num >> max;
  vector<int> a(num), b(num);
  for(i = 0; i < num; ++i){
    cin >> a[i];
  }
  for(j = 0; j < num; ++j){
    cin >> b[j];
  }

  int min = INF;
  for(k = 0; k < num; k++){
    for(l = 0; l < num; l++){
      if (a[k] + b[l] < max){
        continue;
      }
      if (a[k] + b[l] < min){
        min = a[k] + b[l];
      }
    }
  }
  cout << min << endl;
}

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int num, v, i, j;
  cin >> num >> v;
  vector<int> a(num);
  for(i = 0; i < num; ++i){
    cin >> a[i];
  }

  bool exist = false;

  for(j = 0; j < num; ++j){
    if(a[j] == v){
      exist = true;
    }
  }
  if(exist){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

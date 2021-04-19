#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int num, v, i, j, count = 0;
  cin >> num >> v;
  vector<int> a(num);
  for(i = 0; i < num; ++i){
    cin >> a[i];
  }

  for(j = 0; j < num; ++j){
    if(a[j] == v){
      count++;
    }
  }
  cout << count << endl;
}

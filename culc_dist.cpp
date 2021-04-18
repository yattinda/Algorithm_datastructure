#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double calc_dist(double x1, double x2, double y1, double y2){
  double x_diff = x1 - x2;
  double y_diff = y1 - y2;
  return sqrt((x_diff * x_diff) - (y_diff * y_diff));
}

int main(){
  int num, i, j, k;
  cin >> num;

  vector<double> x(num), y(num);

  for(i = 0; i < num; ++i){
    cin >> x[i] >> y[i];
  }

  double min_dist = 1000000.0;

  for(j = 0; j < num; ++j){
    for(k = j + 1; k < num; ++k){
      double dist = calc_dist(x[j], x[k], y[j], y[k]);

      if(dist < min_dist){
        min_dist = dist;
      }
    }
  }
  cout << min_dist << endl;
}

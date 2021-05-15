#include <iostream>
#include <vector>
using namespace std;

int min_devide(int n){
    int i = 0;
    for(;n % 2 == 0; n = n / 2){
        
        ++i;
    }
    return i;
}

int main(){
    int m, i, j, times = 999999;
    cin >> m;
    vector <int> a(m);
    
    for (i = 0; i < m; i++){
        cin >> a[i];
    }

    for (j = 0; j < m; j++){
        if(min_devide(a[j]) < times){
            times = min_devide(a[j]);
        }
    }

    cout << times << endl;
}

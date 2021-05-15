#include <iostream>
#include <vector>
using namespace std;

vector <long long> memo;

long long tribo(int n){
    if(n == 0){
        return 0;
    } else if (n == 1){
        return 0;
    } else if (n == 2){
        return 1;
    }

    if(memo[n] != -1){
        return memo[n];
    }

    return memo[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}

int main(){
    int m, i;
    memo.assign(50, -1);
    tribo(49);
    
    for (i = 2; i < 50; i++){
        cout << i << ":" << memo[i] << endl;
    }
}

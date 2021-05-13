#include <iostream>
#include <vector>

using namespace std;

bool func (int i, int w, const vector<int> &a){
    if(i== 0){
        if(w == 0){
            return true;
        } else {
            return false;
        }
    }

    if(func(i - 1, w, a)){
        return true;
    }

    if(func(i - 1, w - a[i - 1], a)){
        return true;
    }

    return false;
}

int main(){
    int n, w;
    cin >> n >> w;
    vector<int> a(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    if(func(n, w, a)){
        cout << "YES" << endl;
    } else {
        cout << "No" << endl;
    }
}


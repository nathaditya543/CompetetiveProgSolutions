#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for (int i = 0; i < n; i++){
        int val,targ;
        cin >> val >> targ;

        int k = targ - (val % targ );
        if(targ == k)
            cout << 0 << endl;
        else
            cout << k << endl; 
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
}
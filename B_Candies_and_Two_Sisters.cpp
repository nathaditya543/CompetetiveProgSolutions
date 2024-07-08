#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int _ = 0; _ < n; _++){
        int val;
        cin >> val;

        if(val % 2 == 0)
            cout << ( val/2 )- 1 << endl;
        else
            cout << val/2 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
}
#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int _ = 0; _ < n; _++){
        int p,k;
        cin >> p >> k;
        string str = "";

        for(int i = 0; i < k; i++)
            str+= char(97+i);

        for(int i = 0; i < p; i++){
            cout << str;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
}
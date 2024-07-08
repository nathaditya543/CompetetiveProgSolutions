#include<bits/stdc++.h>
#define int long long
using namespace std;

int binpow(int a, int b){
    int res = 1;
    while(b){
        if(b%2)
            res = a * res;
        a = a * a;
        b = b/2;
    }
    return res;
}

signed main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int sets = binpow(2,k);
        for(int i = 0; i < sets; i++){
            for(int i = 0; i <  20; i++)
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int ModExp(int a, int b, int mod){
    a = a % mod;
    int res = 1;
    while(b != 0){
        if(b % 2 == 1)
            res = (a * 1LL * res) % mod;
        a = (a * 1LL * a) % mod;
        b = b/2;
    }
    return res;
}

int main(){
    int n;cin >> n;
    int mod = 1e9 + 7;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;

        int res = ModExp(b,c,mod-1);
        cout << ModExp(a,res,mod) << endl;
    }
}
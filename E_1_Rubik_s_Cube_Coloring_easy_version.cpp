#include<bits/stdc++.h>
using namespace std;


int modBinpow(int a, long long b, int mod){
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
    int k; cin >> k;
    int mod = 1e9 + 7;
    int pow = modBinpow(2,k,mod-1);
    int ans = (modBinpow(4,pow,mod) * 1LL * modBinpow(16,mod-2,mod) * 6)%mod;
    cout << ans;
}
#include<bits/stdc++.h>

using namespace std;

int modBinpow(int a, int b, int mod){
    int res = 1;
    while(b != 0){
        if(b % 2 == 1)
            res = (res * 1LL * a) % mod;
        a = (a * 1LL * a)%mod;
        b = b/2;
    }
    return res;
}

int main(){
    int w,h; cin >> w >> h;
    int mod = 998244353;

    int ans =  modBinpow(2,w+h,mod);
    cout << ans << endl;

}
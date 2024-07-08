#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;  cin >> n;

    while(n--){
        int k; cin >> k;
        int c_and = LONG_LONG_MAX;
        int c_or = 0;
        int x;
        for(int i = 0; i < k; i++){
            cin >> x;
            c_and &= x;
            c_or |= x;
        }

        int c_xor = c_and ^ c_or;
        
        for(int i = 0; i < 64; i++){
            if((c_xor >> i) & 1){
                cout << ( 1LL << (i+1))  << endl;
                break;
            }
        }
    }
}
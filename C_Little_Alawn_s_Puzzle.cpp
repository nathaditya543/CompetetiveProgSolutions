#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int,int> mp;
        int arr1[n];
        for(int i = 0; i < n; i++)
            cin >> arr1[i];
            
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[arr1[i]] = x;
        }

        int ans = 1;
        int mod = 1e9 + 7;
        for(int i = 0; i < n; i++){
            if(mp[i] == mp[mp[i]])
                ans = (ans * 1LL * (n-2)) % mod;
            else
                ans = (ans * 1LL * (n-3)) % mod;
        }

        cout << ans << endl;
    }
}
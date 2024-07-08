#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,p;
    cin >> n >> k >> p;
    string str; cin >> str;
    set<char> nSet;
    int ctr = 0;
    string ans = "";
    for(int i = 0; i < p; i++){
        nSet.insert(str[i]);

        if(nSet.size() == k){
            ans += str[i];
            ctr++;
            nSet.clear();
        }
    }

    if(ctr < n){
        cout << "NO" << endl;
        // cout << ans << endl;
        for(int i = 0; i < k; i++){
            if(count(nSet.begin(), nSet.end(), char(i+97)) == 0){
                ans += string(n-ans.size(),char(i + 97));
            }
        }
        cout << ans << endl;
    }
    else
        cout << "YES" << endl;
}

int main(){
    int n; cin >> n;
    for(int i = 0 ; i < n; i++){
        solve();
    }
}
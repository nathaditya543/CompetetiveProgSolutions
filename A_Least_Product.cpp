#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve(){
    int n; cin >> n;
    int neg = 0;
    bool flag = 1;
    for(int i = 0;i < n; i++){
        int x;cin >> x;
        if(x < 0)
            neg++;
        else if(x == 0){
            flag = 0;
        }     
    }
    
    if(neg%2 == 0 && flag){
        cout << 1 << endl << 1 << " " << 0 << endl;
        return;
    }
    cout << 0 << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
}
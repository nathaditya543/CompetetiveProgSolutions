#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<pair<int,int>> arr;

    for(int i = 0 ; i < n; i++){
        int x; cin >> x;
        arr.push_back({x,i});    
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        
    }

}
int main(){
    int n; cin >> n;

    for(int i = 0; i <  n; i++)
        solve();
}
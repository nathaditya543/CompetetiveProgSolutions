#include<bits/stdc++.h>
using namespace std;
#define int long long
 
bool monotonic(vector<int> &atk, int hth, int &dmg){
    for(int i = 0; i < atk.size()-1; i++){
        if(atk[i+1] - atk[i] > dmg)
            hth -= dmg;
        else
            hth -= atk[i+1] - atk[i];
    }
    hth -= dmg;
    return(hth <= 0);
}
 
int solve(){
    int n,h; cin >> n >> h;
    vector<int> atk(n);
    for(int i = 0; i < n; i++)
        cin >> atk[i];
    
    int min = 1;
    int max = 1e+18;
 
    while(min < max){
        int mid = min + (max - min)/2;
        if(monotonic(atk, h, mid))
            max = mid;
        else 
            min = mid+1;
 
    }
 
    return max;
}
 
 
 
 
signed main(){
    int t; cin >> t;
    while(t--)
        cout << solve() << endl;
}
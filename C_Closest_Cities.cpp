#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    
    
    vector<int> dist_l;
    vector<int> dist_r;
    dist_r.push_back(0);
    dist_l.push_back(0);
    dist_r.push_back(1);
    dist_l.push_back(1);

    for(int i = 1; i < n-1; i++){
        if(abs(nums[i] - nums[i-1]) > abs(nums[i] - nums[i+1]))
            dist_r.push_back(1 + dist_r[i]);
        else
            dist_r.push_back(abs(nums[i] - nums[i+1]) + dist_r[i]);
    }

    for(int i = n-2; i > 0; i--){
        if(abs(nums[i] - nums[i-1]) < abs(nums[i] - nums[i+1]))
            dist_l.push_back(1 + dist_l[n - 1 -  i]);
        else
            dist_l.push_back(abs(nums[i] - nums[i-1]) + dist_l[n - 1 - i]);
    }

    reverse(dist_l.begin(), dist_l.end());

    for(auto i: dist_r)
        cout << i << " ";
    
    cout << endl;
    
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int x,y; cin >> x >> y;
        if(x < y)
            cout << dist_r[y-1] - dist_r[x-1] << endl;
        else
            cout << dist_l[y-1] - dist_l[x-1] << endl; 
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
}
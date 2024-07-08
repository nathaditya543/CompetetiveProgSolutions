#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q; cin >> n >> q;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(),nums.end(), greater<int>());

    for(int i = 1; i < n; i++)
        nums[i] += nums[i-1]; 

    for(int i = 0; i < q; i++){
        int min = 1;
        int max = n+1;
        int targ; cin >> targ;
        
        while(min < max){
            int mid = min + (max - min)/2;
            if(nums[mid - 1] >= targ)
                max = mid;
            else
                min = mid+1;
        }
        
        if(min == n+1)
            cout << -1 << endl;
        else
            cout << min << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
}
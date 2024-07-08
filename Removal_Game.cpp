#include<bits/stdc++.h>
using namespace std;
#define int long long

int helper(int l, int r, vector<int>& nums, vector<vector<int>>& dp){
    if(l > r)
        return 0;
    if(dp[l][r] != INT_MIN)
        return dp[l][r];
    if(l == r)
        return dp[l][r] = nums[l];
    if(r-l == 1)
        return dp[l][r] = max(nums[l],nums[r]);
    
    int left = nums[l] + min(helper(l+2, r, nums, dp), helper(l+1, r-1, nums, dp));
    int right = nums[r] + min(helper(l+1, r-1, nums, dp), helper(l, r-2, nums, dp));
    
    return dp[l][r] = max(left,right);
}

signed main(){
    int t; cin >> t;
    vector<int> nums(t);
    for(int i = 0; i < t; i++)
        cin >> nums[i];
    
    vector<int> row(t,INT_MIN);
    vector<vector<int>> dp(t,row);

    cout << helper(0,t-1, nums, dp);
}
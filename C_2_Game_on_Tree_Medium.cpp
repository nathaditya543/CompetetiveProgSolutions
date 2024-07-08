#include<bits/stdc++.h>
using namespace std;

int solve(int curr, int parent, vector<vector<int>>& adj_list, vector<int>& dp){
    // cout << curr << " " << parent << endl;
    if(dp[curr] != -1)
        return dp[curr];

    dp[curr] = 0;
    for(int i: adj_list[curr]){
        if(i != parent && solve(i, curr, adj_list, dp) == 0){
            dp[curr] = 1;
            break;
        }
    }
    return dp[curr];
}

int main(){
    int n, t; cin >> n >> t;
    vector<vector<int>> adj_list(n+1);
    vector<int> dp(n+1, -1);
    for(int i = 0; i < n-1; i++){
        int u,v; cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    cin >> t;
    solve(t, -1, adj_list, dp);
    cout << (dp[t] ? "Ron":"Hermione");
}
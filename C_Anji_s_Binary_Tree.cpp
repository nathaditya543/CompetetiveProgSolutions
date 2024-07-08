#include<bits/stdc++.h>
using namespace std;

int findConversions(int curr, string& dir, vector<vector<int>>& adj, int conv){
    if(adj[curr].size() == 0)
        return conv;
    
    int left = INT_MAX;
    int right = INT_MAX;

    if(dir[curr-1] == 'U'){
        if(adj[curr][0] != 0)
            left = findConversions(adj[curr][0], dir, adj, conv + 1);
        if(adj[curr][1] != 0)
            right = findConversions(adj[curr][1], dir, adj, conv + 1);
    }
    else if(dir[curr-1] == 'R'){
        if(adj[curr][0] != 0)
            left = findConversions(adj[curr][0], dir, adj, conv + 1);
        if(adj[curr][1] != 0)
            right = findConversions(adj[curr][1], dir, adj, conv);
    }
    else{
        if(adj[curr][0] != 0)    
            left = findConversions(adj[curr][0], dir, adj, conv);
        if(adj[curr][1] != 0)    
            right = findConversions(adj[curr][1], dir, adj, conv + 1);
    }
    
    if(left < right)
        return left;
    return right; 

}

int solve(){
    int n; cin >> n;
    string dir; cin >> dir;
    vector<vector<int>> adj(n+1);
    
    for(int i = 1; i < n+1; i++){
        int l,r; cin >> l >> r;
        if(l != 0 || r != 0){
            adj[i].push_back(l);
            adj[i].push_back(r);
        }
    }
    return findConversions(1, dir, adj, 0);
}

int main(){
    int t; cin >> t;
    while(t--)
        cout << solve() << endl;
}
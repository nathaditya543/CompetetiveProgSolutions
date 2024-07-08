#include<bits/stdc++.h>
using namespace std;

void distanceToChild(int curr, int parent, int dist, vector<int> &dv, vector<vector<int>> &adj){
    if(adj[curr].size() == 1 && adj[curr][0] == parent)
        dv.push_back(dist);
    
    for(int i: adj[curr]){
        if(i != parent){
            distanceToChild(i, curr, dist+1, dv, adj);
        }
    }

}

int main(){
    int n, t; cin >> n >> t;
    vector<vector<int>> adj(n+1);
    for(int i = 1; i < n; i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin >> t;
    vector<int> dist;
    distanceToChild(t, -1, 0, dist, adj);
    for(auto i: dist)
        cout << i << endl;
}
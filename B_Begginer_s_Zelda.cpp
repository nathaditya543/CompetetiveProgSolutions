#include<bits/stdc++.h>
using namespace std;

vector<int> get_diameter(vector<vector<int>> adj){

}

int solve(){
    int n; cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < n-1; i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int max = 0, max_f = 0;
    for(int i = 0; i < n; i++){
        if(adj[i].size() > max){
            max = adj[i].size();
            max_f = 0;
        }
        else if(adj[i].size() == max)
            max_f++;
    }
    if(max_f > 0 && max > 2)    
        return max;
    return max-1;
}

int main(){
    int t; cin >> t;
    while(t--)
        cout << solve() << endl;
}
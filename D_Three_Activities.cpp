#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;

    vector <pair<int, int>> v1;
    vector <pair<int, int>> v3;
    vector <pair<int, int>> v2;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v1.push_back({x,i});
    }

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v2.push_back({x,i});
    }

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v3.push_back({x,i});
    }
    
    auto comp = [&](const pair<int,int> a, const pair<int,int> b){
        return(a.first > b.first);
    };

    sort(v1.begin(),v1.end(),comp);
    sort(v2.begin(),v2.end(),comp);
    sort(v3.begin(),v3.end(),comp);
    
    for(int  i = 0; i < n; i++){
        
    }
    return 0;
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
       cout << solve();
}
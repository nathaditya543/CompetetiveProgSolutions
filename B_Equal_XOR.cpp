#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        map<int,int> mp1,mp2;
        vector<pair<int,int>> vec1, vec2;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp1[x]++;
        }

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp2[x]++;
        }
        
        for(auto i: mp1){
            vec1.push_back({i.second,i.first});
        }

        for(auto i: mp2){
            vec2.push_back({i.second,i.first});
        }

        sort(vec1.begin(), vec1.end(), greater<>());
        sort(vec2.begin(), vec2.end(), greater<>());
        vector<int> ans1, ans2;
        int ctr = 0, i = 0;
        while(ctr < 2*k){
            if(vec1[i].first == 2){
                ans1.push_back(vec1[i].second);
                ans2.push_back(vec2[i].second);
                ans1.push_back(vec1[i].second);
                ans2.push_back(vec2[i].second);
                ctr++;
            }
            else{
                ans1.push_back(vec1[i].second);
                ans2.push_back(vec2[i].second);
            }
            ctr++;
            i++;
        }

        for(auto i: ans1)
            cout << i << " ";
        cout << endl;
        for(auto i: ans2)
            cout << i << " ";
        cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> nums(n);

    for(int i = 0 ; i < n; i++)
        cin >> nums[i];
    
    int q; cin >> q;
    vector<int> sums;
    sums.push_back(0);
    for(int i = 0; i < n; i++){
        sums.push_back(nums[i]+sums[i]);
    }
    
    for(int i = 0; i < q; i++){
        int x,y; cin >> x >> y;
        cout << sums[y+1]-sums[x] << endl;
    }
}
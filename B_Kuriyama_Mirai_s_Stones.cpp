#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    vector<long long> sorted_nums = nums;
    sort(sorted_nums.begin(), sorted_nums.end());

    vector<long long> sums;
    vector<long long> sort_sums;
    sums.push_back(0);
    sort_sums.push_back(0);

    for(int i = 0 ; i < n; i++){
        sums.push_back(sums[i] + nums[i]);
        sort_sums.push_back(sort_sums[i] + sorted_nums[i]);
    }

    int q; cin >> q;

    for(int i = 0; i < q; i++){
        int x,y,z; cin >> x >> z >> y;
    
        if(x == 1)
            cout << sums[y] - sums[z-1] << endl;
        else 
            cout << sort_sums[y] - sort_sums[z-1] << endl;
    }       
}
#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,k,d; cin >> n >> k >> d;
    vector<int> sch(n);
    for(int i = 0; i < n; i++){
        cin >> sch[i];
    }
    map<int,int> nums;
    for(int i = 0; i < d; i++)
        nums[sch[i]]++;

    int ans = nums.size();
    int left = 0;
    int right = d;
        
    while(left < n-d){
        nums[sch[left]]--;
        nums[sch[right]]++;

        if(nums[sch[left]] == 0)
            nums.erase(sch[left]);


        ans = min(ans,(int)nums.size());
        left++;
        right++;
    }
    return ans;

}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)  
        cout << solve() << endl;
}
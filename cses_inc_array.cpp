#include<bits/stdc++.h>
using namespace std;

long solve(vector<long> nums){
    long prev = nums[0];
    long ops = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] < prev){
            ops += prev - nums[i];
            nums[i] = prev;
        }
        prev = nums[i];
    }
    return ops;
}

int main(){
    long n;
    cin >> n;
    vector<long> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    cout << solve(arr);
}
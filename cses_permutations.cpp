#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n == 1)
        cout << 1;
        
    else if(n < 4)
        cout << "NO SOLUTION";
    else{
        vector<int> nums;
        
        for(int i = 2; i <= n; i+=2)
            nums.push_back(i);
        for(int i = 1; i <= n; i+=2)
            nums.push_back(i);
        
        for(int i: nums)
            cout << i << " ";
    }
}

int main(){
    int n;
    cin >> n;
    
    solve(n);
}